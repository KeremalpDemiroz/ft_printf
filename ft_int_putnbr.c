/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_putnbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 18:14:12 by kedemiro          #+#    #+#             */
/*   Updated: 2025/07/07 21:29:45 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_digits(int n)
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
int	ft_int_putnbr(int n)
{
	char	c;
	int digits;

	digits = n;
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (n < 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	if (n >= 0 && n <= 9)
	{
		c = (n + '0');
		write(1, &c, 1);
	}
	if (n > 9)
	{
		ft_int_putnbr(n / 10);
		c = (n % 10 + '0');
		write(1, &c, 1);
	}
	return (ft_digits(digits));
}
