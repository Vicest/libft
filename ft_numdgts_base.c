/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numdgts_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 14:02:35 by vicmarti          #+#    #+#             */
/*   Updated: 2020/10/04 14:31:17 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Number of digits in an integer of a given base.
*/

size_t	ft_numdgts_base(long long n, size_t baselen)
{
	size_t i;
	unsigned long long	un;

	i = 1;
	un = n;
	if(n < 0)
		un = -1 * (n - 1) + 1;
	while ((un /= baselen) != 0)
		i++;
	return (i);
}
