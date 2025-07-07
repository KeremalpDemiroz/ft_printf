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

#include "libftprintf.h"

int main()
{
	ft_printf("merhaba dünya %c", 'a' );
}