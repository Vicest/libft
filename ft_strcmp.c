/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/09 11:23:30 by vicmarti          #+#    #+#             */
/*   Updated: 2021/03/21 16:17:25 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	i;
	int		diff;

	i = 0;
	diff = (unsigned char)s1[i] - (unsigned char)s2[i];
	while (s1[i] && !diff)
	{
		i++;
		diff = (unsigned char)s1[i] - (unsigned char)s2[i];
	}
	return (diff);
}
