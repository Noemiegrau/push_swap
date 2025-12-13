/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_instructions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:45:10 by nograu            #+#    #+#             */
/*   Updated: 2025/12/13 18:12:45 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

#include <stdio.h>

void	sa(v_list **a)
{
	v_list	*temp;
	v_list	*second;

	// printf("\nThere are %d nods in this list.\n", ps_lstsize(&a));
	if (!a || !*a || !(*a)->next)
		return ;
	temp = *a; // sauvegarde du premier noeud dans temp
	second = (*a)->next; // initialisation du deuxieme noeud, *a pointe sur lui
	temp->next = second->next; // dans le next de temp on met le next qu'il y avait dans second, le 1er pointe sur le 3e
	second->next = temp; // deuxieme pointe sur le premier
	*a = second; // head devient le deuxieme
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
	sa(&a);
	sb(&b);
}
 // a = 1er pointeur, a->next = 2eme pointeur.
