/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_swap_push.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:45:10 by nograu            #+#    #+#             */
/*   Updated: 2026/01/04 16:14:54 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a)
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

void	sb(t_list **b)
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

void	ss(t_list **a, t_list **b)
{
	sa(*&a);
	sb(*&b);
}

void	pa(t_list **a, t_list **b)
{
	t_list	*temp;

	if (!b || !*b)
		return ;
	temp = *b;
	*b = (*b)->next; // avance le head de b sur le deuxieme pointeur pour pas couper la chaine // mais du coup le noeud a 2 noeuds qui lui pointent dessus en meme temps ?
	temp->next = *a; //le premier noeud de a devient le next du temp (noeud deplace)
	*a = temp; // temp est place en premier noeud dans a, le head de a pointe mtn sur temp
}

void	pb(t_list **a, t_list **b)
{
	t_list	*temp;

	if (!a || !*a)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = *b;
	*b = temp;
}
