/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort_utils2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/30 15:39:37 by nograu            #+#    #+#             */
/*   Updated: 2025/12/30 16:56:39 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

int	smallest_num(v_list *a)
{
	int	min;
	int	index;
	int	i;
	v_list	*current;

	current = a;
	min = current->nb;
	index = 0;
	i = 0;
	while (current)
	{
		if (current->nb < min)
		{
			min = current->nb;
			index = i;
		}
		current = current->next;
		i++;
	}
	return (index);
}