/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/10 21:12:10 by vicmarti          #+#    #+#             */
/*   Updated: 2021/03/21 17:32:19 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <limits.h>

int	ft_atoi(const char *str)
{
	int			sign;
	long int	nbr;

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
				return (INT_MAX);
			else
				return (INT_MIN);
		}
		nbr = (nbr * 10) + (*str++ - '0');
	}
	return ((int)sign * nbr);
}
