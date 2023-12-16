/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:01:24 by svaccaro          #+#    #+#             */
/*   Updated: 2023/12/16 02:10:11 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t	ft_strlen(const char *s)
{
	size_t	cnt;

	cnt = 0;
	if (!s)
		return (0);
	while (s[cnt] != '\0')
		cnt++;
	return (cnt);
}

int	ft_strchr_index(const char *s, int c)
{
	int				ptr;
	unsigned char	cc;

	if (!s)
		return (-1);
	cc = (unsigned char)c;
	ptr = 0;
	while (s[ptr])
	{
		if (s[ptr] == cc)
			return (ptr);
		ptr++;
	}
	if (cc == '\0')
		return (ptr);
	return (-1);
}

char	*ft_strjoin_pro(char *s1, char *s2)
{
	char	*strjoin;
	size_t	strjoinlen;
	size_t	i;
	size_t	j;

	strjoinlen = ft_strlen(s1) + ft_strlen(s2);
	if (!strjoinlen)
		return (free(s1), NULL);
	strjoin = malloc((strjoinlen + 1) * sizeof(char));
	if (!strjoin)
		return (free(s1), NULL);
	i = 0;
	while (s1 && s1[i])
	{
		strjoin[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j])
		strjoin[i++] = s2[j++];
	strjoin[i] = '\0';
	return (free(s1), strjoin);
}
