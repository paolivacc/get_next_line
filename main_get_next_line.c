/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_get_next_line.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:46:17 by svaccaro          #+#    #+#             */
/*   Updated: 2023/12/02 20:19:53 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int main (int argc, char **argv)
{
	int	fd;
	char	*line;
	
	if (argc != 2)
		return (-1);
	fd = ft_atoi(argv[1]);
	line = get_next_line(fd);
	while (line)
	{
		ft_printf("%s\n", line);
		free(line);
		line = get_next_line(fd);
	}
	free(line);
	return (0);
}

