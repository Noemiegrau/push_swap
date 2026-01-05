/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 14:12:44 by nograu            #+#    #+#             */
/*   Updated: 2026/01/05 20:25:55 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_swap(int	*a, int	*b)
{
	int	temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

static void	bubble_sort(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}

static void	index_attribution(t_list **a, int *temp)
{
	t_list	*current;
	int		i;

	current = *a;
	while (current)
	{
		i = 0;
		while (i < ps_lstsize(*a))
		{
			if (current->nb == temp[i])
			{
				current->index = i;
				break ;
			}
			i++;
		}
		current = current->next;
	}
}

void	copy_a_to_temp(t_list **a, int *temp)
{
	t_list	*current;
	int		i;

	i = 0;
	current = *a;
	while (current)
	{
		temp[i] = current->nb;
		current = current->next;
		i++;
	}
}

void	find_index(t_list **a)
{
	int		*temp;

	if (!a || !*a)
		return ;
	temp = malloc(sizeof(int) * ps_lstsize(*a));
	if (!temp)
		return ;
	copy_a_to_temp(a, temp);
	bubble_sort(temp, ps_lstsize(*a));
	index_attribution(a, temp);
	free(temp);
}
