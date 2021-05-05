/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <vicmarti@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/05 14:58:12 by vicmarti          #+#    #+#             */
/*   Updated: 2021/05/05 15:42:51 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstrev(t_list **lst)
{
	t_list	*next;
	t_list	*prev;

	if (!lst)
		return ;
	prev = NULL;
	next = (*lst)->next;
	while (next)
	{
		(*lst)->next = prev;
		prev = *lst;
		*lst = next;
		next = next->next;
	}
	(*lst)->next = prev;
}
