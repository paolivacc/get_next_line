/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:20:27 by svaccaro          #+#    #+#             */
/*   Updated: 2023/10/24 11:40:28 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd,h>

/**
 * @brief Read a line from the file fd and returns it.
 * @param fd file descriptor to read from.
 * @return the line read.
 */
char	*get_next_line(int fd);

#endif /*GET_NEXT_LINE_H*/
