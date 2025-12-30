/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 16:51:36 by nograu            #+#    #+#             */
/*   Updated: 2025/12/30 15:45:14 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

int	is_sorted(v_list **a)
{
	v_list	*current;

	if (!a || !*a)
		return (0);
	current = *a;
	while (current->next != NULL)
	{
		if (current->nb > current->next->nb)
			return (1);
		current = current->next;
	}
	return (0);
}
void	small_sorting(v_list **a, v_list **b)
{
	if (is_sorted(&a))
	{
		write(1, "Success: Was already sorted\n", 28);
		return (0);
	}
	else if (ps_lstsize(&a) == 2)
	{
		sorting_two(&a);
		write(1, "Success: Sorted 2\n", 18);
	}
	else if (ps_lstsize(&a) == 3)
	{
		sorting_three(&a);
		write(1, "Success: Sorted 3\n", 18);
	}
	else if (ps_lstsize(&a) == 4 || ps_lstsize(&a) == 5) // et 4 aussi ?
	{
		sorting_five(&a, &b);
		write(1, "Success: Sorted 5\n", 18);
	}
	else  // big algo
	{
		write(1, "Unsuccessful\n",13);
		return (0);
	}
	return (0);
}

int	sorting_two(v_list **a)
{
	v_list	*current;

	if (!a || !*a)
		return (0);
	current = *a;
	if (current->nb > current->next->nb)
		sa(current);
	return (0);
}

int	sorting_three(v_list **a)
{
	v_list	*current;
	int		first;
	int		second;
	int		third;

	if (!a || !*a)
		return (0);
	current = *a;
	first = current->nb;
	second = current->next->nb;
	third = current->next->next->nb;
	if (first > second && second > third) // 321
		sa(&a);
		rra(&a);
	if (first > second && second < third) // 213
		sa(&a);
	if (first < second && second > third) // 132
		sa(&a);
		ra(&a);
	if (first > second && second < third) // 312
		sa(&a);
	else // 231
		rra(&a);
	return (0);
}

int	sorting_five(v_list **a, v_list **b)
{
	v_list	*current_a;
	v_list	*current_b;

	if (!a || !*a)
		return (0);
	current_a = *a;
	current_b = *b;

	// 2 plus petit element de a dans b
	
	// sorting_three
	sorting_three(&a);
	// 2 elements de b dans a
	while (current_b) // while (current_b->next != NULL) ?? maybe
		pa(&a, &b);
	return (0);
}