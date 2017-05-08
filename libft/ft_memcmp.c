/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <vpailhe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/10 16:38:59 by vpailhe           #+#    #+#             */
/*   Updated: 2014/11/22 16:46:47 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const char	*ptrs1;
	const char	*ptrs2;

	ptrs1 = s1;
	ptrs2 = s2;
	if (!s1 || !s2 || !n)
		return (0);
	while (--n)
	{
		if (*ptrs1 == *ptrs2)
		{
			ptrs1++;
			ptrs2++;
		}
		if (!*ptrs1 && !*ptrs2)
			return (0);
	}
	return (*(unsigned char *)ptrs1 - *(unsigned char *)ptrs2);
}
