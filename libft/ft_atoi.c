/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <vpailhe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 12:12:22 by vpailhe           #+#    #+#             */
/*   Updated: 2014/12/09 15:44:19 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_atoi(const char *str)
{
	int				val;
	int				j;
	unsigned int	digit;

	val = 0;
	digit = 0;
	while (*str == ' ' || *str == '\n' || *str == '\r' || *str == '\t'
			|| *str == '\v' || *str == '\f')
		str++;
	j = (*str == '-' ? -1 : 1);
	if (*str == '+' || *str == '-')
		str++;
	if (ft_strlen(str) > 19)
		return (j == 1 ? -1 : 0);
	while (ft_isdigit(*str) && *str != '\0')
	{
		digit = (int)(*str - '0');
		val = (val * 10) + digit;
		str++;
	}
	return (val * j);
}
