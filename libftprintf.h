#ifndef LIBFTPRINTF_H

# define LIBFTPRINTF_H

# include "./Libft/libft.h"
# include <stdarg.h> 

# define ARG_TYPE "cspdiuxX%"

char	ft_istype(const char *type, const char *c);
size_t	ft_how_many_args(const char *str);
int		ft_int_putstr(char *s);

# endif