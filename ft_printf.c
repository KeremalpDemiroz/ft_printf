#include "libftprintf.h"

/*
		% kadar putstr, % görünce uygun tepki, sonraki % ye kadar putstr
*/
int	ft_which_output(char c)
{}
int	ft_printf(const char *string, ...)
{
	int		n;
	va_list args;

	va_start(args, string);
	
	if (!string)
	{
		if (!ft_how_many_args)
		{
			ft_putstr_fd(string, 1);
			return (ft_strlen(string));
		}
		while (n < ft_how_many_args(string))
		{
			
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
