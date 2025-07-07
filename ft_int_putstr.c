/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_int_putstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 21:38:27 by kedemiro          #+#    #+#             */
/*   Updated: 2025/07/07 21:48:26 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_int_putstr(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		write(1, &s[i++], 1);
	return (i);
}
