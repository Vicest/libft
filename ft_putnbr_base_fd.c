/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 21:32:16 by vicmarti          #+#    #+#             */
/*   Updated: 2020/02/24 10:54:00 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_base_fd(unsigned long long n, char *base, int fd)
{
	size_t	blen;

	blen = ft_strlen(base);

	if (n / blen)
		ft_putnbr_base_fd(n / blen, base, fd);
	ft_putchar_fd(base[(n % blen)] , fd);
}
/*
int		ft_putnbr_base(unsigned long long n, char *base)
{
	int		len;
	size_t	blen;

	blen = ft_strlen(base);
	len = ft_numdgts_base(blen);
	while 
	*/
