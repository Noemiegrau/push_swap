/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_reverse.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:45:10 by nograu            #+#    #+#             */
/*   Updated: 2025/12/14 18:35:49 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

void	rra(v_list **a)
{
	v_list	*last;
	v_list	*second_to_last;

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

void	rrb(v_list **b)
{
	v_list	*last;
	v_list	*second_to_last;

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

void	rrr(v_list **a, v_list **b)
{
	rra(*&a);
	rrb(*&b);
}
