#include "libftprintf.h"
#include <stdio.h>
/*
		% kadar putstr, % görünce uygun tepki, sonraki % ye kadar putstr
*/

int	ft_printf(const char *string, ...)
{
	int		n;
	int		total;
	int		i;
	char type;
	va_list args;

	va_start(args, string);
	n = 0;
	i = 0;
	total = 0;
	if (string)
	{
		if (ft_how_many_args(string) == 0)
			return (ft_int_putstr(string));
		while (string[i + total] != '\0')
		{
			while (string[i + total] != '%' && string[i + total] != '\0')
				total += ft_int_putstr(string);
			if (n < ft_how_many_args(string))
			{
				type = ft_istype(ARG_TYPE, (string + total));
				if (type == 'c')
					total += ft_int_putchar((const char)va_arg(args, int));
				else if (type == 's')
					total += ft_int_putstr(va_arg(args, char *));
				else if (type == 'p')
					total += ft_int_putptr((void *)va_arg(args,unsigned long));
				else if (type == 'd' || type == 'i')
					total += ft_int_putnbr(va_arg(args,int));
				else if (type == 'u')
					total += ft_int_putunbr(va_arg(args, unsigned int));
				else if (type == 'x' || type == 'X')
					total += ft_int_puthex(type, va_arg(args, unsigned int));
				else if (type == '%')
					total += ft_int_putchar('%');
				n++;
			}
		}
		return (total);
	}
	return (-1);
}

/*
	deneme(char *s, char c)
	{ 
		if (c == s)
			putstr;
		else if(c == c)
			putchar;
		else if 
	}

			c		s		p		d		i		u		x		X		%
		 |-----| |-----| |-----| |-----| |-----| |-----| |-----| |-----| |-----|
   ascii | 099 | | 115 | | 112 | | 100 | | 105 | | 117 | | 120 | | 088 | | 037 |
		 |-----| |-----| |-----| |-----| |-----| |-----| |-----| |-----| |-----|
   mod   |	   | |     | |     | |     | |     | |     | |     | |     | |	   |
		 |-----| |-----| |-----| |-----| |-----| |-----| |-----| |-----| |-----|
   kat	 |	   | |     | |     | |     | |     | |     | |     | |     | |	   |
		 |-----| |-----| |-----| |-----| |-----| |-----| |-----| |-----| |-----|
   bölen |     | |     | |	   | |	   | |	   | |     | |     | |     | |	   |
		 |-----| |-----| |-----| |-----| |-----| |-----| |-----| |-----| |-----|

*/
