/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vicmarti <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/15 09:58:41 by vicmarti          #+#    #+#             */
/*   Updated: 2021/03/21 16:32:09 by vicmarti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *n)
{
	t_list	*iter;

	if (!lst)
		return ;
	if (!*lst)
	{
		*lst = n;
		return ;
	}
	iter = *lst;
	while (iter->next)
		iter = iter->next;
	iter->next = n;
}
