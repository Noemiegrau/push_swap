/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:45:10 by nograu            #+#    #+#             */
/*   Updated: 2025/12/14 15:24:33 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

#include <stdio.h>

void	sa(v_list **a)
{
	int		temp;

	if (!a || !*a || !(*a)->next)
		return ;
	temp = (*a)->next->nb;
	(*a)->next->nb = (*a)->nb;
	(*a)->nb = temp;
	// v_list	*temp;
	// v_list	*second;
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

void	pa(v_list **a, v_list **b)
{
	v_list	*temp;
	
	if (!b || !*b)
		return ;
	temp = *b; // sauvegarde le 1er noeud de b dans temp
	*b = (*b)->next; // avance le head de b sur le deuxieme pointeur pour pas couper la chaine
	temp->next = *a; //le premier noeud de a devient le next du temp (noeud deplace)
	*a = temp; // temp est place en premier noeud dans a, le head de a pointe mtn sur temp
}

void	pb(v_list **a, v_list **b)
{
	v_list	*temp;

	if (!a || !*a)
		return ;
	temp = *a;
	*a = (*a)->next;
	temp->next = *b;
	*b = temp; 
}

void	ra(v_list **a)
{

}

// void	rb(v_list **b)
// {

// }

// void	rr(v_list **a, v_list **b)
// {
//	ra(*&a);
//	rb(*&b);
// }

// void	rra(v_list **a)
// {

// }

// void	rrb(v_list **b)
// {

// }

// void	rrr(v_list **a, v_list **b)
// {
//	rra(*&a);
//	rrb(*&b);
// }
