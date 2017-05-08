/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strtrim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <vpailhe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/09 15:01:02 by vpailhe           #+#    #+#             */
/*   Updated: 2014/12/09 17:09:39 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_strtrim(char const *s)
{
	char		*result;
	char const	*end;
	char const	*begin;

	begin = NULL;
	if (s == NULL)
		return (NULL);
	while (*s)
	{
		if (!(*s == ' ' || *s == '\n' || *s == '\t'))
		{
			begin = (begin == NULL) ? s : begin;
			end = s;
		}
		s++;
	}
	if (begin == NULL)
		return (ft_strnew(0));
	if ((result = (char *)malloc(sizeof(char) * (end - begin + 2))) == NULL)
		return (NULL);
	s = begin;
	while (s <= end)
		*result++ = *s++;
	*result = '\0';
	return (result - (end - begin + 1));
}
