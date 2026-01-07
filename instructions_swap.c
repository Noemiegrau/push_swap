/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_swap.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:45:10 by nograu            #+#    #+#             */
/*   Updated: 2026/01/07 19:02:34 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	instructions_sa(t_list **a)
{
	int		temp_nb;
	int		temp_index;

	if (!a || !*a || !(*a)->next)
		return ;
	temp_nb = (*a)->next->nb;
	(*a)->next->nb = (*a)->nb;
	(*a)->nb = temp_nb;
	temp_index = (*a)->next->index;
	(*a)->next->index = (*a)->index;
	(*a)->index = temp_index;
}

void	sa(t_list **a)
{
	instructions_sa(a);
	write(1, "sa\n", 3);
}

void	instructions_sb(t_list **b)
{
	int		temp_nb;
	int		temp_index;

	if (!b || !*b || !(*b)->next)
		return ;
	temp_nb = (*b)->next->nb;
	(*b)->next->nb = (*b)->nb;
	(*b)->nb = temp_nb;
	temp_index = (*b)->next->index;
	(*b)->next->index = (*b)->index;
	(*b)->index = temp_index;
}

void	sb(t_list **b)
{
	instructions_sb(b);
	write(1, "sb\n", 3);
}

void	ss(t_list **a, t_list **b)
{
	instructions_sa(a);
	instructions_sb(b);
	write(1, "ss\n", 3);
}
