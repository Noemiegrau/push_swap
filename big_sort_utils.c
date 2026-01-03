/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 14:12:44 by nograu            #+#    #+#             */
/*   Updated: 2026/01/03 17:06:57 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h> // to suppr later


void	bubble_sort(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;
	
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

void	nbr_to_index(t_list **a) // a changer de fichier (big_sort ?)
{
	t_list *current;
	int	*tmp;
	int	i;

	tmp = malloc(sizeof(int) * ps_lstsize(a));
	if (!tmp)
		return ;
	i = 0;
	current = a;
	while (current)
	{
		tmp[i] = current->nb;
		current = current->next;
		i++;
	}
	bubble_sort(tmp, ps_lstsize(a));
// 4. remplacer le nbr par cet index (ajouter un element dans ma structure ??? perte du nb...)
	current = a;
	while (current)
	{
		i = 0;
		while (i < ps_lstsize(a))
		{
			if (current->nb == tmp[i])
			{
				current->nb = i;
				break;
			}
			i++;
		}
		current = current->next;
	}
	free(tmp);
}

// A METTRE SUR CES FONCTIONS OU PAS ???
//	if (!a || !*a)
//		return ;