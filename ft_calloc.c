/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/11 18:47:07 by vicmarti          #+#    #+#             */
/*   Updated: 2021/08/30 19:20:04 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	const size_t	mem_bytes = count * size;
	void			*out;

	if (mem_bytes == 0)
		return (NULL);
	out = malloc(mem_bytes);
	if (out != NULL)
		ft_bzero(out, mem_bytes);
	return (out);
}
