NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Werror -Wextra

SRCS =	ft_istype.c\
		ft_how_many_args.c\
		ft_int_putstr.c
		

SRCS_LIBFT = ../Sources/libft.a


OBJC = $(SRCS:.c=.o)
all:$(NAME)
$(NAME):$(OBJC)
	@ar rcs $(NAME) $(OBJC)

clean:
	@rm -rf $(OBJC)

fclean:clean
	@rm -rf $(NAME)

re:fclean all

run:all clean
	clear
	@$(CC) $(CFLAGS) main.c $(NAME)
	@./a.out

norm: $(SRCS)
	@norminette /srcs/$(SRCS)

.PHONY: all clean fclean re