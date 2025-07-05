/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_istype.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kedemiro <kedemiro@student.42istanbul.com. +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 22:09:39 by kedemiro          #+#    #+#             */
/*   Updated: 2025/07/05 22:10:02 by kedemiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
