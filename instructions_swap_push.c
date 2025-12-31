/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_swap_push.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:45:10 by nograu            #+#    #+#             */
/*   Updated: 2025/12/31 18:02:18 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_list **a)
{
	int		temp;

	if (!a || !*a || !(*a)->next)
		return ;
	temp = (*a)->next->nb;
	(*a)->next->nb = (*a)->nb;
	(*a)->nb = temp;
	// t_list	*temp;
	// t_list	*second;
	// temp = *a; // sauvegarde du premier noeud dans temp
	// second = (*a)->next; // initialisation du deuxieme noeud, *a pointe sur lui
	// temp->next = second->next; // dans le next de temp on met le next qu'il y avait dans second, le 1er pointe sur le 3e
	// second->next = temp; // deuxieme pointe sur le premier
	// *a = second; // head devient le deuxieme
}

void	sb(t_list **b)
{
	t_list	*temp;
	t_list	*second;

	if (!b || !*b || !(*b)->next)
		return ;
	temp = *b;
	second = (*b)->next;
	temp->next = second->next;
	second->next = temp;
	*b = second;
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
	temp = *b; // sauvegarde le 1er noeud de b dans temp
	*b = (*b)->next; // avance le head de b sur le deuxieme pointeur pour pas couper la chaine
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
