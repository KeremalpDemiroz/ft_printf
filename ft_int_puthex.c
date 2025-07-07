/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_puthex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 19:40:48 by kedemiro          #+#    #+#             */
/*   Updated: 2025/07/07 20:13:49 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int ft_int_puthex(unsigned int nbr, char c)
{
	int		total;
	char	*base;
	
	total = 0;
	if (c == 'x')
		base = HEX_LOWER;
	else if (c == 'X')
		base = HEX_UPPER;
	if (nbr < 16)
	{
		write(1, &base[nbr], 1);
		return (1);
	}
	if (nbr >= 16)
	{
		total += ft_int_puthex(nbr / 16, c);
		total += ft_int_puthex(nbr % 16, c);
	}
	return (total);
}

