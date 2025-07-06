#include <stdio.h>
#include "Libft/libft.h"
#include "libftprintf.h"
//% adetini bul, eğeri %den sonra bir şey yoksa bu bir hata, orijinal çıktı vermiyor bu durumda. 
// "%c %" de bile çıktı yok.
// "%s" ama karşılık gelen arg yoksa (null)
// "%c", NULL -> '\0' muhtemelen
// "%d" veya "%i" veya "%u", NULL -> 0;
// "%p", NULL -> (nil); 
// "%x" veya "%X", NULL -> 0;
// "%%", argv -> to many arg warning ama çıktı % olarak geliyor.
// "%x" veya "%X", 017 -> f;
// "%x" veya "%X", 00 -> 0;
// "%x" veya "%X", 018 -> error, invalid digit "8" in octal constat
// "%c %p", NULL -> %p için garbage(%d ve benzerleri de aynı durum(%x küçük harflerle, %X büyük harflerle garbage))
// Yani printf NULL sonrası verilen fazla arg isteğinde garbage alır diyebilir miyiz?
// HAYIR her şekilde fazla istek garbage çekiyor.
// Bak bu fazla salak bi durum. "merhaba %t", "string" -> yanıt yok ama "merhaba %ğ", "string" -> merhaba %ğ;
// 8 bitlik charlarda % yi string  gibi yazıyor ama 7 bitliklerde çıktı yok. WTF!!!
// DÜzeltme -> $ işaretinde de yazdı derdi 8 bitlikler değil. ne mk bunun derdi -> $ tanımlı ve ğ salak bi ascii olduğu içinn yazıyormuş.

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

char	ft_istype(const char *type, char *c)
{
	while (*type)
	{
		if (*type == *c)
			return (*type);
		type++;
	}
	return (0);
}
int	ft_printf(const char *string, ...)
{
	va_list args;
	va_start(args, string);

	if (!string)
	{
		if (!ft_how_many_args(string))
			return (ft_int_putstr(string));
		while ()
	}
}
int main()
{
	ft_printf("merhaba dünya %c", 'c');
}