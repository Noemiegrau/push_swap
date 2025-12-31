/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_reverse.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:45:10 by nograu            #+#    #+#             */
/*   Updated: 2025/12/31 18:02:13 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **a)
{
	t_list	*last;
	t_list	*second_to_last;

	if (!a || !*a || !(*a)->next)
		return ;
	second_to_last = *a;
	while (second_to_last->next->next)
		second_to_last = second_to_last->next;
	last = second_to_last->next;
	second_to_last->next = NULL;
	last->next = (*a);
	*a = last;
}

void	rrb(t_list **b)
{
	t_list	*last;
	t_list	*second_to_last;

	if (!b || !*b || !(*b)->next)
		return ;
	second_to_last = *b;
	while (second_to_last->next->next)
		second_to_last = second_to_last->next;
	last = second_to_last->next;
	second_to_last->next = NULL;
	last->next = (*b);
	*b = last;
}

void	rrr(t_list **a, t_list **b)
{
	rra(*&a);
	rrb(*&b);
}
