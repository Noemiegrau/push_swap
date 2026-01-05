/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:39:37 by nograu            #+#    #+#             */
/*   Updated: 2026/01/05 17:59:10 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_two(t_list **a)
{
	t_list	*current;

	current = *a;
	if (current->nb > current->next->nb)
		sa(&current);
}

void	sorting_three(t_list **a)
{
	int		first;
	int		second;
	int		third;

	first = (*a)->nb;
	second = (*a)->next->nb;
	third = (*a)->next->next->nb;
	if (first > second && second > third && first > third)
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third && first < third)
		sa(a);
	else if (first < second && second > third && first < third)
	{
		sa(a);
		ra(a);
	}
	else if (first > second && second < third && first > third)
		ra(a);
	else if (first < second && second > third && first > third)
		rra(a);
}

void	sorting_four(t_list **a, t_list **b)
{
	while(ps_lstsize(*b) < 1)
	{
		if ((*a)->index == 0)
			pb(a, b);
		else
			ra(a);
	}
	sorting_three(a);
	pa(a, b);
}

void	sorting_five(t_list **a, t_list **b)
{
	while(ps_lstsize(*b) < 2)
	{
		if ((*a)->index == 0 || (*a)->index == 1)
			pb(a, b);
		else
			ra(a);
	}
	sorting_three(a);
	if (ps_lstsize(*b) == 2 && (*b)->nb < (*b)->next->nb)
		sb(b);
	pa(a, b);
	pa(a, b);
}
