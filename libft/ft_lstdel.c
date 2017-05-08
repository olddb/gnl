/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <vpailhe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/17 10:04:18 by vpailhe           #+#    #+#             */
/*   Updated: 2014/11/22 20:52:59 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*list;
	t_list	*next;

	if (alst && (*del))
	{
		list = *alst;
		while (list)
		{
			next = list->next;
			del(list->content, list->content_size);
			free(list);
			list = next;
		}
		*alst = NULL;
	}
}
