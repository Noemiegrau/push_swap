/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:04:22 by nograu            #+#    #+#             */
/*   Updated: 2025/12/13 18:37:26 by nograu           ###   ########.fr       */
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

int	ps_lstsize(v_list *lst)
{
	v_list	*current;
	int		i;

	i = 0;
	current = lst;
	if (!lst)
		return (0);
	while (current != NULL)
	{
		i++;
		current = current->next;
	}
	return (i);
}