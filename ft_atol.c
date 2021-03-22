/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 21:12:10 by vicmarti          #+#    #+#             */
/*   Updated: 2021/03/22 14:19:36 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

long	ft_atol(const char *str)
{
	int		sign;
	long	nbr;

	sign = 1;
	nbr = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '+' || *str == '-')
		sign = ',' - *str++;
	while ('0' <= *str && *str <= '9')
	{
		if ((nbr * 10 + nbr % 10) < nbr)
		{
			if (sign == 1)
				return (LONG_MAX);
			else
				return (LONG_MIN);
		}
		nbr = (nbr * 10) + (*str++ - '0');
	}
	return (sign * nbr);
}
