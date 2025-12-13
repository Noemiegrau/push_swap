/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:45:10 by nograu            #+#    #+#             */
/*   Updated: 2025/12/13 19:16:06 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

#include <stdio.h>

void	sa(v_list **a)
{
	// v_list	*temp;
	// v_list	*second;
	int		temp;
	
	
	// head -> noeud1 -> noeud2
	//	addr    addr       addr
	//	next-> next-> next-> NULL
	
	// printf("\nThere are %d nods in this list.\n", ps_lstsize(&a));
	if (!a || !*a || !(*a)->next)
	return ;
	temp = (*a)->next->nb;
	(*a)->next->nb = (*a)->nb;
	(*a)->nb = temp;
	// temp = *a; // sauvegarde du premier noeud dans temp
	// second = (*a)->next; // initialisation du deuxieme noeud, *a pointe sur lui
	// temp->next = second->next; // dans le next de temp on met le next qu'il y avait dans second, le 1er pointe sur le 3e
	// second->next = temp; // deuxieme pointe sur le premier
	// *a = second; // head devient le deuxieme
}

void	sb(v_list **b)
{
	v_list	*temp;
	v_list	*second;

	if (!b || !*b || !(*b)->next)
		return ;
	temp = *b;
	second = (*b)->next;
	temp->next = second->next;
	second->next = temp;
	*b = second;
}

void	ss(v_list **a, v_list **b)
{
	sa(*&a);
	sb(*&b);
}

// void	pa(v_list **a)
// {

// }

// void	pb(v_list **b)
// {

// }

// void	ra(v_list **a)
// {

// }

// void	rb(v_list **b)
// {

// }

// void	rr(v_list **a, v_list **b)
// {

// }

// void	rra(v_list **a)
// {

// }

// void	rrb(v_list **b)
// {

// }

// void	rrr(v_list **a, v_list **b)
// {

// }
// pa, pb, ra, rb, rr, rra, rrb, rrr
 // a = 1er pointeur, a->next = 2eme pointeur.
