/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <vpailhe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/22 21:00:38 by vpailhe           #+#    #+#             */
/*   Updated: 2014/12/09 16:16:08 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			countword(char const *s, char c)
{
	int		nbword;

	nbword = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		nbword++;
		while (*s != c && *s)
			s++;
		s++;
	}
	return (nbword);
}

int			*countwordlen(char const *s, char c, int nbword)
{
	int		*tabval;
	int		i;
	int		x;

	tabval = (int *)malloc(sizeof(tabval) * nbword);
	i = 0;
	x = 0;
	while (*s)
	{
		i = 0;
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			s++;
			i++;
		}
		tabval[x] = i;
		x++;
		s++;
	}
	return (tabval);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		wordnum;
	char	**tab;

	if (!s || !c)
		return (NULL);
	wordnum = countword(s, c);
	i = 0;
	tab = (char **)malloc(sizeof(char) * wordnum);
	while (*s)
	{
		j = 0;
		tab[i] = (char *)malloc(sizeof(char) *
				(countwordlen(s, c, countword(s, c))[i]));
		while (*s == c && *s)
			s++;
		while (*s != c && *s)
		{
			tab[i][j++] = *s;
			s++;
		}
		i++;
	}
	return (tab);
}
