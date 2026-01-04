/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:39:37 by nograu            #+#    #+#             */
/*   Updated: 2026/01/04 22:42:27 by nograu           ###   ########.fr       */
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

static void	push_small_up(t_list **a)
{
	int	index;
	int	size;

	// if (!a || !*a) A VERIFIER POUR TOUTES LES FONCTIONS DU PROJET
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

void	sorting_five(t_list **a, t_list **b) // trouver une autre maniere de faire cette fonction
{
	push_small_up(a);
	pb(a, b);
	if (ps_lstsize(*a) == 4)
	{
		push_small_up(a);
		pb(a, b);
	}
	sorting_three(a);
	if (ps_lstsize(*b) == 2 && (*b)->nb < (*b)->next->nb)
		sb(b);
	pa(a, b);
	pa(a, b);
}
