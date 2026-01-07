/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_reverse.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:45:10 by nograu            #+#    #+#             */
/*   Updated: 2026/01/07 19:09:01 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	instructions_rra(t_list **a)
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

void	rra(t_list **a)
{
	instructions_rra(a);
	write(1, "rra\n", 4);
}

void	instructions_rrb(t_list **b)
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

void	rrb(t_list **b)
{
	instructions_rrb(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	instructions_rra(a);
	instructions_rrb(b);
	write(1, "rrr\n", 4);
}
