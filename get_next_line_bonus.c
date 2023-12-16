/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:48:41 by svaccaro          #+#    #+#             */
/*   Updated: 2023/12/16 02:19:20 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

static int	save_info_read(int fd, char **save_bytes)
{
	int		index;
	char	*buffer;
	int		bytes_read;

	index = -1;
	bytes_read = 1;
	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buffer)
		return (free(*save_bytes), *save_bytes = NULL, -1);
	while (index == -1 && bytes_read)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read == -1)
		{
			free(*save_bytes);
			*save_bytes = NULL;
			free(buffer);
			return (-1);
		}
		buffer[bytes_read] = '\0';
		*save_bytes = ft_strjoin_pro(*save_bytes, buffer);
		index = ft_strchr_index(*save_bytes, '\n');
	}
	free(buffer);
	return (index);
}

static char	*save_line(char *save_bytes, int index)
{
	int		i;
	char	*line;

	if (index == -1)
		line = malloc(sizeof(char) * (ft_strlen(save_bytes) + 1));
	else
		line = malloc(sizeof(char) * (index + 2));
	if (!line)
		return (NULL);
	i = 0;
	while (save_bytes[i] != '\n' && save_bytes[i] != '\0')
	{
		line[i] = save_bytes[i];
		i++;
	}
	if (save_bytes[i] == '\n')
		line[i++] = '\n';
	line[i] = '\0';
	return (line);
}

static char	*update_bytes_read(char *save_bytes, int index)
{
	char	*save_bytes_updated;

	if (index == -1)
		return (free(save_bytes), NULL);
	save_bytes_updated = ft_strjoin_pro(NULL, save_bytes + index + 1);
	return (free(save_bytes), save_bytes_updated);
}

char	*get_next_line(int fd)
{
	static char	*save_bytes[256];
	char		*line;
	int			index;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	index = save_info_read(fd, &save_bytes[fd]);
	if (!save_bytes[fd])
		return (NULL);
	line = save_line(save_bytes[fd], index);
	save_bytes[fd] = update_bytes_read(save_bytes[fd], index);
	return (line);
}
