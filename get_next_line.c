/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:48:41 by svaccaro          #+#    #+#             */
/*   Updated: 2023/12/06 16:49:36 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	save_info_read(int fd, ssize_t *save_bytes)
{
	int	index;
	int bytes_read;

	index = NULL;
	bytes_read = 1;
	while (!index && bytes_read)
	{	
		bytes_read = read(fd, &save_bytes, BUFFER_SIZE);
		index = ft_strchr_index(save_bytes, '\n');
	}
	return (index);
}
void	keep_line(char save_bytes, char *line, int index)
{
	int	len;
	
	len = ft_strlen(save_bytes);
	ft_
	
}

char	*get_next_line(int fd)
{
	static char	save_bytes;
	char				line;
	int					index;
	
	index = save_info_read(fd, &save_bytes);
	if (!&save_bytes || !index)
		return (NULL);
	keep_line(save_bytes, &line, index);
	update_bytes_read(&save_bytes);
	return (line);
}


	
	//leer y guardar en variable estática lo que leí del archivo
	//guardar linea
	//actualizar variable estática






char	*get_next_line(int fd)
{
	static char	*save_bytes;
	ssize_t			bytes_read;
	char				*line;
	char				*tmp;
	int					index;

	tmp = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!tmp)
		return (NULL);
	bytes_read = read(fd, tmp, BUFFER_SIZE);
	if (bytes_read == 0 || bytes_read == -1)
		return (NULL);
	if (!save_bytes)
		save_bytes = strdup(tmp);
	index = ft_strchr(save_bytes, '\n');
	if (index)
	{
		line = ft_substr(save_bytes, 0, index);
	}
	
	
		
	if (ft_strchr(tmp, '\n'))
	{
		
	}
	if (bytes_read)
		str = NULL;
	return (str);
}
