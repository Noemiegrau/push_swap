/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_rotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:45:10 by nograu            #+#    #+#             */
/*   Updated: 2025/12/14 18:12:12 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

void	ra(v_list **a)
{
	v_list	*temp;
	v_list	*last;
	
	if (!a || !*a || !(*a)->next)
		return ;
	temp = *a;
	*a = (*a)->next;	
	last = ps_lstlast(*a);
	last->next = temp;
	temp->next = NULL;
}

void	rb(v_list **b)
{
	v_list	*temp;
	v_list	*last;
	
	if (!b || !*b || !(*b)->next)
		return ;
	temp = *b;
	*b = (*b)->next;	
	last = ps_lstlast(*b);
	last->next = temp;
	temp->next = NULL;
}

void	rr(v_list **a, v_list **b)
{
	ra(*&a);
	rb(*&b);
}