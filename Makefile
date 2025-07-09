NAME=libftprintf.a

SRCS=ft_control.c\
	ft_printf.c\
	ft_puts.c

OBJS= $(SRCS:.c=.o)

RESET   = \033[0m
GREEN   = \033[1;32m
YELLOW  = \033[1;33m
BLUE    = \033[1;34m
CYAN    = \033[1;36m
RED     = \033[1;31m

CC=cc
CFLAGS=-Wall -Werror -Wextra


%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)
$(NAME): $(OBJS)
	@ar rcs $(NAME) $(OBJS)
	@echo "$(GREEN) $(NAME) is CREATED!$(RESET)"

clean:
	@rm -f $(OBJS)
	@echo "$(RED) Objects are DELETED!$(RESET)"

fclean: clean
	@rm -f $(NAME)
	@echo "$(RED) $(NAME) is DELETED!$(RESET)"

re: fclean all

run: all clean
	$(CC) main.c $(NAME)
	clear
	@echo "$(YELLOW) Main.c is Running...$(RESET)"
	@./a.out

norm:
	clear
	@echo "$(YELLOW)Checking Norms... $(RESET)"
	@norminette $(SRCS) printf.h

.PHONY: all clean fclean re run norm
