#include "libftprintf.h"
#include <stdio.h>
int	ft_how_many_args(const char *str)
{
	int arg_count;

	arg_count = 0;
	if (str)
	{
		while (*str)
		{
			if (*str++ == '%')
			{
				printf("%c\n", ft_istype(ARG_TYPE, str));
				if (*str == ft_istype(ARG_TYPE, str))
				{
					arg_count++;
					str++;
				}
				else
					return (0);
			}
			str++;
		}
		return (arg_count);
	}
	return (0);
}
int main()
{
	char 
} 