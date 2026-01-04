/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_lists_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:04:22 by nograu            #+#    #+#             */
/*   Updated: 2026/01/04 16:20:47 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*ps_lstnew(int nb)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->nb = nb;
	new_node->index = -1;
	new_node->next = NULL;
	return (new_node);
}

void	ps_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

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

t_list	*ps_lstlast(t_list *lst)
{
	t_list	*current;

	if (!lst)
		return (NULL);
	current = lst;
	while (current->next != NULL)
		current = current->next;
	return (current);
}

int	ps_lstsize(t_list *lst)
{
	t_list	*current;
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
