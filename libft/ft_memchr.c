/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <vpailhe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 13:23:07 by vpailhe           #+#    #+#             */
/*   Updated: 2014/11/22 16:57:38 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)s;
	if (s && n > 0)
	{
		while (i < n)
		{
			if (tmp[i] == (unsigned char)c)
			{
				return ((void*)(tmp + i));
			}
			i++;
		}
	}
	return (NULL);
}
