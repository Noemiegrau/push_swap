/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:39:37 by nograu            #+#    #+#             */
/*   Updated: 2026/01/04 17:32:31 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	smallest_num(t_list *a)
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

static void	smallest_up(t_list **a)
{
	int	index;
	int	size;

	// if (!a || !*a) A RETIRER car deja dans sorting()
	// 	return ;
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

void	sorting_two(t_list **a)
{
	t_list	*current;

//	if (!a || !*a) A RETIRER car deja dans sorting()
//		return ;
	current = *a;
	if (current->nb > current->next->nb)
		sa(&current);
}

void	sorting_three(t_list **a)
{
	int		f;
	int		s;
	int		t;

//	if (!a || !*a) A RETIRER car deja dans sorting()
//		return ;
	f = (*a)->nb;
	s = (*a)->next->nb;
	t = (*a)->next->next->nb;
	if (f > s && s > t && f > t) // 321
	{
		sa(a);
		rra(a);
	}
	else if (f > s && s < t && f < t) // 213
		sa(a);
	else if (f < s && s > t && f < t) // 132
	{
		sa(a);
		ra(a);
	}
	else if (f > s && s < t && f > t) // 312
		ra(a);
	else if (f < s && s > t && f > t)// 231
		rra(a);
}

void	sorting_five(t_list **a, t_list **b)
{
//	if (!a || !*a) A RETIRER car deja dans sorting()
//		return ;
	smallest_up(a);
	pb(a, b);
	if (ps_lstsize(*a) == 4)
	{
		smallest_up(a);
		pb(a, b);
	}
	sorting_three(a);
	if (ps_lstsize(*b) == 2 && (*b)->nb < (*b)->next->nb)
		sb(b);
	pa(a, b);
	pa(a, b);
}
