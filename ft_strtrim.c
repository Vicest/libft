/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 13:17:58 by vicmarti          #+#    #+#             */
/*   Updated: 2021/10/19 13:18:02 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*end;
	char		*trimmed;

	if (!s1 || !set)
		return (NULL);
	start = NULL;
	end = NULL;
	while (*s1)
	{
		if (!ft_strchr(set, *s1))
		{
			end = s1;
			if (!start)
				start = s1;
		}
		s1++;
	}
	trimmed = malloc(sizeof(char) * (end - start + 2));
	if (trimmed)
		ft_strlcpy(trimmed, start, end - start + 2);
	return (trimmed);
}
