/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort_utils2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:39:37 by nograu            #+#    #+#             */
/*   Updated: 2025/12/31 18:02:55 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	smallest_num(t_list *a)
{
	int		min;
	int		index;
	int		i;
	t_list	*current;

	current = a;
	min = current->nb;
	index = 0;
	i = 0;
	while (current)
	{
		if (current->nb < min)
		{
			min = current->nb;
			index = i;
		}
		current = current->next;
		i++;
	}
	return (index);
}

void	smallest_up(t_list **a)
{
	int	index;
	int	size;

	if (!a || !*a)
		return ;
	index = smallest_num(*a);
	size = ps_lstsize(*a);
	if (index <= size / 2) // if index est en haut de la pile
	{
		while (index > 0) // on shift up tous les elements 1x
		{
			ra(a);
			index--;
		}
	}
	else // if index est en bas de la pile
	{
		while (index < size) // on shift down tous les elements 1x
		{
			rra(a);
			index++;
		}
	}
}
