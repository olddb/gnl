/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <vpailhe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 13:20:08 by vpailhe           #+#    #+#             */
/*   Updated: 2014/11/14 01:39:10 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*dst2;
	const char	*src2;

	dst2 = dst;
	src2 = src;
	if (dst <= src)
		return (ft_memcpy(dst, src, len));
	dst2 += len;
	src2 += len;
	while (len--)
		*--dst2 = *--src2;
	return (dst);
}
