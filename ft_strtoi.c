/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/23 11:55:03 by vicmarti          #+#    #+#             */
/*   Updated: 2021/04/08 11:32:13 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <errno.h>
#include "libft.h"

#define SIGN_B 1
#define OVFL_B 2

static char	prefix(char **iter)
{
	char	sign_b;

	while (ft_isspace(**iter))
	(*iter)++;
	sign_b = 0;
	if (**iter == '-')
		sign_b = SIGN_B;
	if (**iter == '+' || **iter == '-')
		(*iter)++;
	return (sign_b);
}

int	ft_strtoi(const char *str, char **endptr)
{
	int			n;
	int		ovf_chk;
	char		flag;

	*endptr = (char *)str;
	flag = prefix(endptr);
	n = 0;
	while (ft_isdigit(**endptr) && !(flag & OVFL_B))
	{
		ovf_chk = 10 * n + (**endptr - '0');
			(*endptr)++;
		if (ovf_chk - (SIGN_B & flag) < n)
		{
			flag += OVFL_B;
			errno = ERANGE;
			n = INT_MAX + (flag & SIGN_B);
		}
		else
			n = ovf_chk;
	}
	while (ft_isdigit(**endptr))
		endptr++;
	if (flag & SIGN_B)
		n = ~n + 1;
	return (n);
}
