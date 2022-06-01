/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: botilia <botilia@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/09 12:49:12 by botilia           #+#    #+#             */
/*   Updated: 2021/10/15 20:19:13 by botilia          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	first;
	size_t	back;
	size_t	str;
	char	*newstr;

	if (!s1 || !set)
		return (NULL);
	first = 0;
	str = 0;
	back = ft_strlen(s1);
	while (s1[first] && ft_strchr(set, s1[first]))
		first++;
	while (s1[back - 1] && ft_strchr(set, s1[back - 1]) && back > first)
		back--;
	newstr = (char *)malloc(sizeof(char) * ((back - first) + 1));
	if (!newstr)
		return (NULL);
	while (first < back)
	{
		newstr[str] = s1[first];
		str++;
		first++;
	}
	newstr[str] = '\0';
	return (newstr);
}
