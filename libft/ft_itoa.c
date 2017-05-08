/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <vpailhe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 20:55:26 by vpailhe           #+#    #+#             */
/*   Updated: 2014/11/26 18:16:41 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		counter(int n)
{
	int i;

	i = 1;
	while (n < 0 || n > 9)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char			*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		if_neg;

	if_neg = 0;
	i = counter(n) + if_neg;
	str = (char *)malloc(sizeof(char) * (i + 1));
	str = (n == -2147483648) ? "-2147483648" : str;
	if (n != -2147483648)
	{
		if_neg = (n < 0) ? 1 : 0;
		n = (if_neg == 1) ? -n : n;
		if (str == NULL)
			return (NULL);
		str[i] = '\0';
		if (n == 0)
			str[0] = '0';
		while (n > 0)
		{
			str[--i] = n % 10 + '0';
			n = n / 10;
		}
		str[0] = (if_neg == 1) ? '-' : str[0];
	}
	return (str);
}
