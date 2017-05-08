/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <vpailhe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 20:30:11 by vpailhe           #+#    #+#             */
/*   Updated: 2014/11/22 17:32:00 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	unsigned int	i;

	i = 0;
	if (dst && src && n)
	{
		while (src[i] != '\0')
		{
			if (i == n)
				return (dst);
			dst[i] = src[i];
			i++;
		}
		while (i != n)
			dst[i++] = '\0';
	}
	return (dst);
}
