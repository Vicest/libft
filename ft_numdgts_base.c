/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numdgts_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/03 14:02:35 by vicmarti          #+#    #+#             */
/*   Updated: 2020/10/04 13:13:33 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Number of digits in an integer of a given base.
*/

size_t	ft_numdgts_base(unsigned long long n, size_t baselen)
{
	size_t i;

	i = 1;
	while ((n /= baselen) != 0)
		i++;
	return (i);
}
