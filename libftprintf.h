#ifndef LIBFTPRINTF_H

# define LIBFTPRINTF_H

# include "./Libft/libft.h"
# include <stdarg.h> 

# define ARG_TYPE "cspdiuxX%"
# define HEX_LOWER "0123456789abcdef"
# define HEX_UPPER "0123456789ABCDEF"

int		ft_printf(const char *strinf, ...);
int		ft_how_many_args(const char *str);
int		ft_int_putstr(const char *s);
int		ft_int_putnbr(int n);
int 	ft_int_puthex(unsigned int nbr, char c);
int		ft_int_putptr(void *ptr);
int		ft_int_putunbr(unsigned int n);
char	ft_istype(const char *type, const char *c);
int		ft_int_putchar(const char c);

# endif