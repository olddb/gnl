/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <vpailhe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/05 16:44:47 by vpailhe           #+#    #+#             */
/*   Updated: 2014/11/14 02:45:47 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t	i;
	int		len;

	i = 0;
	len = ft_strlen(s1);
	while (i < n && s2[i])
		s1[len++] = s2[i++];
	s1[len] = '\0';
	return (s1);
}
