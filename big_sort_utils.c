/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 14:12:44 by nograu            #+#    #+#             */
/*   Updated: 2026/01/04 17:31:27 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h> // to suppr later


static void	bubble_sort(int *tab, int size)
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

void	nbr_to_index(t_list **a)
{
	t_list *current;
	int	*temp;
	int	i;

	if (!a || !*a)
		return ;
	temp = malloc(sizeof(int) * ps_lstsize(*a));
	if (!temp)
		return ;
	i = 0;
	current = *a;
	while (current) // on met les current->nb ds temp
	{
		temp[i] = current->nb;
		current = current->next;
		i++;
	}
	bubble_sort(temp, ps_lstsize(*a)); // on met dans l'odre croissant temp[]
	current = *a;
	while (current)
	{
		i = 0;
		while (i < ps_lstsize(*a))
		{
			if (current->nb == temp[i])
			{
				current->index = i;
				break;
			}
			i++;
		}
		current = current->next;
	}
	free(temp);
}
