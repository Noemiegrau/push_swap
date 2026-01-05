/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort_radix.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/03 14:11:24 by nograu            #+#    #+#             */
/*   Updated: 2026/01/05 19:45:53 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// fonction pour calculer l'index max et donc le nombre de tours necessaires
static int	find_max_bit(t_list **a)
{
	int	bits_needed;
	int	index_max;
	
	bits_needed = 0;// strlen(temp) = 1100011 >> 7 != 0
	index_max = ; 	 // strlen(temp) =   99   >> 7 != 0
	while (index_max >> bits_needed != 0)
		bits_needed++;
	return (bits_needed);
}

void	big_sorting(t_list **a, t_list **b)
{
	int	max_bit;
	
	max_bit = find_max_bit(a);
}
