/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 16:51:36 by nograu            #+#    #+#             */
/*   Updated: 2026/01/08 17:05:22 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	is_sorted(t_list **a)
{
	t_list	*current;

	current = *a;
	while (current->next != NULL)
	{
		if (current->nb > current->next->nb)
			return (1);
		current = current->next;
	}
	return (0);
}

void	sorting(t_list **a, t_list **b)
{
	if (!a || !*a)
		return ;
	if (!(is_sorted(a)))
		return ;
	else if (ps_lstsize(*a) == 2)
		sorting_two(a);
	else if (ps_lstsize(*a) == 3)
		sorting_three(a);
	else if (ps_lstsize(*a) == 4)
		sorting_four(a, b);
	else if (ps_lstsize(*a) == 5)
		sorting_five(a, b);
	else if (ps_lstsize(*a) > 5)
		big_sorting(a, b);
	return ;
}
