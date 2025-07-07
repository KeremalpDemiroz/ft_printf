/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_putptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 20:13:05 by kedemiro          #+#    #+#             */
/*   Updated: 2025/07/07 21:25:42 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_print_base(unsigned long n, int total)
{
	char	*base;
	
	base = HEX_LOWER;
	if (n >= 16)
		total = ft_print_base(n / 16, total);
	write(1, &base[n % 16], 1);
	total++;
	return (total);
}

int ft_int_putptr(void *ptr)
{
	unsigned long	n;
	int				total;

	total = 2;
	n = (unsigned long)ptr;
	write(1, "0x",2);
	total = ft_print_base(n, total);
	return (total);
}
