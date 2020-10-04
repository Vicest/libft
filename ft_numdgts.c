/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numdgts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/24 01:36:59 by vicmarti          #+#    #+#             */
/*   Updated: 2020/10/04 13:14:57 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Number of digits in an integer, base 10.
*/

size_t	ft_numdgts(unsigned long long n)
{
	size_t i;

	i = 1;
	while ((n /= 10) != 0)
		i++;
	return (i);
}
