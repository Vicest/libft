/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 18:47:07 by vicmarti          #+#    #+#             */
/*   Updated: 2021/09/27 15:19:28 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	const size_t	mem_bytes = count * size;
	void			*out;

	out = malloc(mem_bytes);
	if (out != NULL)
		ft_bzero(out, mem_bytes);
	return (out);
}
