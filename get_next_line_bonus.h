/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 17:20:27 by svaccaro          #+#    #+#             */
/*   Updated: 2023/12/16 02:15:42 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <stdlib.h>
# include <unistd.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 100
# endif /*BUFFER_SIZE*/

/**
 * @brief Read a line from fd file and returns it.
 * @param fd file descriptor to read from.
 * @return the line read.
 */
char	*get_next_line(int fd);
/**
 * @brief Computes the length of the string s.
 * @param s The string to compute the length of.
 * @return The number of characters that precede the terminating NUL character.
 */
size_t	ft_strlen(const char *s);
/**
 * @brief Find the first occurrence of c in s.
 * @param s The string to search.
 * @param c The character to find.
 * @return The index of the first occurrence of c in s, or NULL if not found.
 */
int		ft_strchr_index(const char *s, int c);
/**
 * @brief
 *
 * @param s1
 * @param s2
 * @return char*
 */
char	*ft_strjoin_pro(char *s1, char *s2);

#endif /*GET_NEXT_LINE_BONUS_H*/
