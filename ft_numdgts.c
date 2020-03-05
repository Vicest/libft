/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numdgts_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 01:36:59 by vicmarti          #+#    #+#             */
/*   Updated: 2020/02/26 12:29:27 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#define ft_numdgts(n) ft_numdgts_base(n, 10)

size_t	ft_numdgts_base(long long n, size_t baselen)
{
	size_t i;

	i = 0;
	while (n / baselen)
	{
		n /= (long long int)baselen;
		i++;
	}
	return (i);
}
