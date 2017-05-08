/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <vpailhe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/07 15:48:36 by vpailhe           #+#    #+#             */
/*   Updated: 2014/11/14 02:48:29 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*tmp;

	tmp = s;
	tmp = tmp + ft_strlen(s);
	while (*tmp != (char)c && tmp != s)
		tmp--;
	if (*tmp == (char)c)
		return ((char*)tmp);
	return (NULL);
}
