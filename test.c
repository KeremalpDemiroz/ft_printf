#include <stdio.h>
#include "libftprintf.h"

size_t	ft_how_many_args(const char *str)
{
	size_t arg_count;
	if (str)
	{
		while (*str)
		{
			if (*str++ == '%')
			{
				if (*str == ft_istype(ARG_TYPE, str))
				{
					arg_count++;
				}
				else
					return (0);
			}
		}
		return (arg_count);
	}
	return (0);
}

int	ft_putstr_fdn(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
	return(i);
}

int main()
{
	char str[] = "merhaba";
	printf("\n%d", ft_putstr_fdn(str,1));
}