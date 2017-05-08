/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpailhe <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 02:51:43 by vpailhe           #+#    #+#             */
/*   Updated: 2015/03/31 19:13:05 by vpailhe          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include "get_next_line.h"

static int	ft_realloc(char **buffer, size_t size)
{
	int		i;
	char	*buff;

	buff = ft_strdup(*buffer);
	free(*buffer);
	if (!(*buffer = (char *)ft_memalloc(sizeof(char) *
					ft_strlen(buff) + size + 1)))
		return (-1);
	if (*buffer == NULL)
	{
		free(buff);
		return (0);
	}
	i = -1;
	while (buff[++i])
		(*buffer)[i] = buff[i];
	(*buffer)[i] = '\0';
	free(buff);
	return (i);
}

static int	ft_get_piece(char **buffer, char **line)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = *buffer;
	while (tmp[i] != '\0' && tmp[i] != '\n')
		i++;
	if (tmp[i] == '\0' || tmp[i] != '\n')
		return (0);
	tmp[i] = '\0';
	*line = ft_strdup(*buffer);
	*buffer = ft_strdup(*buffer + i + 1);
	free(tmp);
	return (1);
}

int			get_next_line(int const fd, char **line)
{
	static char	*buffer;
	int			bytes_read;
	int			ret;

	if (fd < 0 || !line)
		return (-1);
	bytes_read = 1;
	if (!buffer)
		buffer = ft_strdup("");
	while (bytes_read)
	{
		if (ft_get_piece(&buffer, line))
			return (1);
		ret = ft_realloc(&buffer, BUFF_SIZE);
		if ((bytes_read = read(fd, buffer + ret, BUFF_SIZE)) == -1)
			return (-1);
		buffer[ret + bytes_read] = '\0';
	}
	*line = ft_strdup(buffer);
	free(buffer);
	buffer = NULL;
	return (0);
}
