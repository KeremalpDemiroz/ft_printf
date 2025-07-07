#include <stdio.h>
#include "libftprintf.h"

int main()
{
	int a = 345674567;
	printf("%X\n%1$x\n%1$p", a);
}
