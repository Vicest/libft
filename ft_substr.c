/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 22:43:03 by vicmarti          #+#    #+#             */
/*   Updated: 2021/03/21 17:48:01 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	size_t	strlen;
	char	*out;

	if (!s)
		return (NULL);
	strlen = 0;
	while (*s && start--)
		s++;
	start = 0;
	while (s[start++] && len--)
		strlen++;
	out = malloc(strlen + 1);
	if (!out)
		ft_strlcpy(out, s, strlen + 1);
	return (out);
}
