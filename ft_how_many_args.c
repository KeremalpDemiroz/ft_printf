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
