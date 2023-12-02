/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:20:27 by svaccaro          #+#    #+#             */
/*   Updated: 2023/12/01 11:37:53 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd,h>

/**
 * @brief Read a line from fd file and returns it.
 * @param fd file descriptor to read from.
 * @return the line read.
 */
char	*get_next_line(int fd);

#endif /*GET_NEXT_LINE_H*/
