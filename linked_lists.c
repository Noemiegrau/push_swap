/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:04:22 by nograu            #+#    #+#             */
/*   Updated: 2025/12/13 15:34:19 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

v_list	*ps_lstnew(int nb)
{
	v_list	*new_node;

	new_node = (v_list *)malloc(sizeof(v_list));
	if (!new_node)
		return (NULL);
	new_node->nb = nb;
	new_node->next = NULL;
	return (new_node);
}

void	ps_lstadd_back(v_list **lst, v_list *new)
{
	v_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}