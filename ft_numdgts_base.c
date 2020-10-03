/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numdgts_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 14:02:35 by vicmarti          #+#    #+#             */
/*   Updated: 2020/10/03 14:06:41 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft"

/*
**	Number of digits in an integer of a given base.
*/

size_t	ft_numlen_base(unsigned long long n, char *base)
{
	size_t i;
	size_t baselen;

	baselen = ft_strlen(base);
	i = 1;
	while ((n /= baselen) != 0)
		i++;
	return (i);
}
