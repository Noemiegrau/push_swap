/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_radix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 14:11:24 by nograu            #+#    #+#             */
/*   Updated: 2026/01/08 17:03:50 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_max_bit(t_list **a)
{
	t_list	*current;
	int		bits_needed;
	int		index_max;

	current = *a;
	bits_needed = 0;
	index_max = 0;
	while (current)
	{
		if (current->index > index_max)
			index_max = current->index;
		current = current->next;
	}
	while ((index_max >> bits_needed) != 0)
		bits_needed++;
	return (bits_needed);
}

static void	binary_shifting(t_list **a, t_list **b, int i)
{
	int	size;
	int	j;

	j = 0;
	size = ps_lstsize(*a);
	while (j < size)
	{
		if ((((*a)->index >> i) & 1) == 0)
			pb(a, b);
		else
			ra(a);
		j++;
	}
	while (*b)
		pa(a, b);
	return ;
}

void	big_sorting(t_list **a, t_list **b)
{
	int	i;
	int	max_bit;

	i = 0;
	max_bit = find_max_bit(a);
	while (i < max_bit)
	{
		binary_shifting(a, b, i);
		i++;
	}
	return ;
}
