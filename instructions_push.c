/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_push.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/07 18:09:59 by nograu            #+#    #+#             */
/*   Updated: 2026/01/07 19:24:40 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_list **a, t_list **b)
{
	t_list	*temp;

	if (!b || !*b)
		return ;
	temp = *b;
	*b = (*b)->next; // avance le head de b sur le deuxieme pointeur pour pas couper la chaine // mais du coup le noeud a 2 noeuds qui lui pointent dessus en meme temps ?
	temp->next = *a; //le premier noeud de a devient le next du temp (noeud deplace)
	*a = temp; // temp est place en premier noeud dans a, le head de a pointe mtn sur temp
	write(1, "pa\n", 3);
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
	write(1, "pb\n", 3);
}
