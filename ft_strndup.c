/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/19 11:17:45 by vicmarti          #+#    #+#             */
/*   Updated: 2021/08/30 20:00:13 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	size_t	i;
	char	*out;

	i = 0;
	while (s1[i] && n > i)
		i++;
	out = ft_calloc(i + 1, 1);
	if (!out)
		return (NULL);
	while (i > 0)
	{
		i--;
		out[i] = s1[i];
	}
	return (out);
}
