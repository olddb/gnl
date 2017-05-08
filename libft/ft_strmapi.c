/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <vpailhe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/14 01:42:28 by vpailhe           #+#    #+#             */
/*   Updated: 2014/11/18 14:54:24 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*new;
	size_t			i;
	unsigned int	j;

	i = ft_strlen(s) + 1;
	j = 0;
	new = (void *)malloc(sizeof(void) * i);
	if (!new || !s)
		return (NULL);
	if (f == NULL)
		return (ft_strdup(s));
	while (*s)
	{
		new[j] = (*f)(j, *s++);
		j++;
	}
	new[j] = '\0';
	return (new);
}
