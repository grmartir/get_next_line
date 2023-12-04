/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grmartir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:59:17 by grmartir          #+#    #+#             */
/*   Updated: 2023/02/16 18:08:42 by grmartir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strchr(char *s, int c)
{
	c %= 256;
	while (*s)
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	if (c == '\0')
		return ((char *)s);
	return (0);
}

char	*ft_substr(char *s, unsigned int start, size_t len)
{
	size_t	j;
	size_t	k;
	size_t	i;
	char	*str;

	j = 0;
	i = 0;
	if (!s)
		return (NULL);
	k = ft_strlen(s);
	if (len > k)
		len = k;
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	i = start;
	while (i < k && j < len)
		str[j++] = s[i++];
	str[j] = '\0';
	return (str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	j;
	size_t	k;
	size_t	i;
	char	*str;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	j = ft_strlen(s1) + ft_strlen(s2) + 1;
	str = (char *)malloc(sizeof(char) * j);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	k = 0;
	while (s2[k])
	{
		str[i + k] = s2[k];
		k++;
	}
	*(str + i + k) = '\0';
	return (str);
}

char	*ft_strdup(char *s1)
{
	char	*dst;
	int		i;

	i = 1;
	while (s1[i - 1])
		i++;
	dst = malloc (sizeof(char) * ft_strlen(s1) + 1);
	i = 0;
	if (dst == NULL)
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
