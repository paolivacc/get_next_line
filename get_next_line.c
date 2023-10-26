/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 12:48:41 by svaccaro          #+#    #+#             */
/*   Updated: 2023/10/24 13:07:11 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

crear solo una variable estática

char	*get_next_line(int fd)
{
	char	*str;

	str = read_line(); //lee una linea y devuelve esa linea leida
					   //tener en cuenta stdin y file
	if (no hay más nada que leer || error)
		str = NULL;
	return (str);
}
