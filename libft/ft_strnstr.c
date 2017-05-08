/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <vpailhe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 16:52:16 by vpailhe           #+#    #+#             */
/*   Updated: 2014/11/14 02:47:47 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char		tmp1;
	char		tmp2;
	size_t		len;
	size_t		i;

	i = 0;
	len = 0;
	if ((tmp2 = *s2++) != '\0')
	{
		len = ft_strlen(s2);
		while (!i || ft_strncmp(s1, s2, len) != 0)
		{
			i = 1;
			if ((tmp1 = *s1++) == '\0' || n-- < 1)
				return (NULL);
			while (tmp1 != tmp2)
				if ((tmp1 = *s1++) == '\0' || n-- < 1)
					return (NULL);
			if (len > n)
				return (NULL);
		}
		s1--;
	}
	return ((char *)s1);
}
