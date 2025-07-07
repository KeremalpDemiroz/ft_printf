/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_putunbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 21:26:16 by kedemiro          #+#    #+#             */
/*   Updated: 2025/07/07 21:40:52 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_digits(unsigned int n)
{
	int	digits;

	digits = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		digits = 1;
	while (n != 0)
	{
		n = n / 10;
		digits++;
	}
	return (digits);
}

int	ft_int_putunbr(unsigned int n)
{
	char	c;
	
	if (n >= 0 && n <= 9)
	{
		c = (n + '0');
		write(1, &c, 1);
	}
	if (n > 9)
	{
		ft_int_putunbr(n / 10);
		c = (n % 10 + '0');
		write(1, &c, 1);
	}
	return (ft_digits(n));
}
