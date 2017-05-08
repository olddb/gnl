/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <vpailhe@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 13:53:07 by vpailhe           #+#    #+#             */
/*   Updated: 2014/11/22 18:00:02 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*memory;

	memory = (char *)malloc(sizeof(char) * size);
	if (!size)
		return (NULL);
	if (memory)
		ft_bzero(memory, size);
	return (memory);
}
