#include "libftprintf.h"

/*
		% kadar putstr, % görünce uygun tepki, sonraki % ye kadar putstr
*/

int	ft_printf(const char *string, ...)
{
	va_list args;
	va_start(args, string);

	if (!string)
	{
		if (!args)
		{
			while (*string != '%' && *string != '\0')
				ft_putchar_fd(*string++, 1);
			if (*string++ == '%')
			{
				if (ft_istype(ARG_TYPE, string) == 'c')
					ft_putchar_fd(va_arg(args, int), 1);
			}
		}
		ft_putstr_fd(string, 1);
	}
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
