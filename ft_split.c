/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 14:20:20 by vicmarti          #+#    #+#             */
/*   Updated: 2021/03/21 18:20:16 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static size_t	words(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s && *s == c)
		s++;
	while (*s)
	{
		i++;
		while (*s && *s != c)
			s++;
		while (*s && *s == c)
			s++;
	}
	return (i);
}

static size_t	word_size(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

static void	*clean(char **garbage, size_t items)
{
	while (items-- > 0)
		free(garbage[items]);
	free(garbage);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	size_t	wlen;
	char	**out;

	if (s)
		out = ft_calloc(words(s, c) + 1, sizeof(char *));
	if (!s || !out)
		return (NULL);
	while (*s && *s == c)
		s++;
	i = 0;
	while (*s)
	{
		wlen = word_size(s, c);
		out[i] = malloc(sizeof(char) * (wlen + 1));
		if (!out[i])
			return (clean(out, i));
		ft_memcpy(out[i], s, wlen);
		s += wlen;
		out[i][wlen] = 0;
		while (*s && *s == c)
			s++;
		i++;
	}
	return (out);
}
