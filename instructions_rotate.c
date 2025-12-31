/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_rotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:45:10 by nograu            #+#    #+#             */
/*   Updated: 2025/12/31 18:02:15 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a)
{
	t_list	*temp;
	t_list	*last;

	if (!a || !*a || !(*a)->next)
		return ;
	temp = *a;
	*a = (*a)->next;
	last = ps_lstlast(*a);
	last->next = temp;
	temp->next = NULL;
}

void	rb(t_list **b)
{
	t_list	*temp;
	t_list	*last;

	if (!b || !*b || !(*b)->next)
		return ;
	temp = *b;
	*b = (*b)->next;
	last = ps_lstlast(*b);
	last->next = temp;
	temp->next = NULL;
}

void	rr(t_list **a, t_list **b)
{
	ra(*&a);
	rb(*&b);
}
