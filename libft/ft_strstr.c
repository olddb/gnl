/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <vpailhe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 17:17:20 by vpailhe           #+#    #+#             */
/*   Updated: 2014/11/22 18:03:46 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	len;

	if (*s2 == 0)
		return ((char*)s1);
	len = ft_strlen(s2);
	while (*s1 != '\0')
	{
		if (!ft_memcmp(s1++, s2, len))
			return ((char*)s1 - 1);
	}
	return (NULL);
}
