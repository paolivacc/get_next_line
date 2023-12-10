/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svaccaro <svaccaro@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 13:01:24 by svaccaro          #+#    #+#             */
/*   Updated: 2023/12/06 16:44:52 by svaccaro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


size_t  ft_strlen(const char *s)
{
        size_t  cnt;

        cnt = 0;
        while (s[cnt] != '\0')
                cnt++;
        return (cnt);
}

int ft_strchr_index(const char *s, int c)
{
	int			ptr;
	unsigned char	cc;

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
	return (NULL);
}
char    *ft_substr(char const *s, unsigned int start, size_t len)
{
        char    *substr;
        size_t  slen;

        if (!s)
                return (NULL);
        slen = ft_strlen(s);
        if (start >= slen || len == 0)
                return (ft_strdup(""));
        if (slen - start < len)
                len = slen - start;
        substr = malloc((len + 1) * sizeof(char));
        if (substr == NULL)
                return (NULL);
        ft_strlcpy(substr, s + start, len + 1);
        return (substr);
}
