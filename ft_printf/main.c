#include <stdio.h>
#include "Libft/libft.h"
#include "libftprintf.h"

char	ft_istype(const char *type, char *c)
{
	while (*type)
	{
		printf("%c\n", *type);
		if (*type == *c)
			return (*type);
		type++;
	}
	return (0);
}
int main()
{
	char c[] = "%sac";
	printf("%c", strtype(ARG_TYPE, c));
}