/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <vpailhe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/13 17:18:58 by vpailhe           #+#    #+#             */
/*   Updated: 2014/12/09 15:58:27 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*c1;
	char	*c2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	c1 = (char *)malloc(sizeof(char *) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (c1 == NULL)
		return (NULL);
	c2 = c1;
	while (*s1 != '\0')
		*c2++ = *s1++;
	while (*s2 != '\0')
		*c2++ = *s2++;
	*c2 = '\0';
	return (c1);
}
