/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 16:51:36 by nograu            #+#    #+#             */
/*   Updated: 2025/12/31 13:27:50 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

#include <stdio.h> // to suppr later

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
//void	small_sorting(v_list **a)
{
	if (!(is_sorted(a)))
	{
		write(1, "Success: Was already sorted\n", 28);
		printf("A list is now:\n");
		while (*a)
		{
			printf("%d\n", (*a)->nb);
			(*a) = (*a)->next;
		}
		return ;
	}
	else if (ps_lstsize(*a) == 2)
	{
		sorting_two(a);
		write(1, "Success: Sorted 2\n", 18);
		printf("A list is now:\n");
		while (*a)
		{
			printf("%d\n", (*a)->nb);
			(*a) = (*a)->next;
		}
	}
	else if (ps_lstsize(*a) == 3)
	{
		sorting_three(a);
		write(1, "Success: Sorted 3\n", 18);
		printf("A list is now:\n");
		while (*a)
		{
			printf("%d\n", (*a)->nb);
			(*a) = (*a)->next;
		}
	}
	else if (ps_lstsize(&a) == 4 || ps_lstsize(&a) == 5)
	{
		sorting_five(&a, &b);
		write(1, "Success: Sorted 5\n", 18);
		printf("A list is now:\n");
		while (*a)
		{
			printf("%d\n", (*a)->nb);
			(*a) = (*a)->next;
		}
	}
	else  // big algo
	{
		write(1, "Unsuccessful\n",13);
		return ;
	}
}

void	sorting_two(v_list **a)
{
	v_list	*current;

	if (!a || !*a)
		return ;
	current = *a;
	if (current->nb > current->next->nb)
		sa(&current);
}

void	sorting_three(v_list **a)
{
	int		first;
	int		second;
	int		third;

	if (!a || !*a)
		return ;
	first = (*a)->nb;
	second = (*a)->next->nb;
	third = (*a)->next->next->nb;
	if (first > second && second > third) // 321
	{
		sa(a);
		rra(a);
	}
	else if (first > second && second < third) // 213
		sa(a);
	else if (first < second && second > third) // 132
	{
		sa(a);
		ra(a);
	}
	else if (first > second && second < third) // 312
		sa(a);
	else // 231
		rra(a);
}

void	sorting_five(v_list **a, v_list **b)
{
	int	size;
	int	min_index;

	size = ps_lstsize(*a); // 4 ou 5
	while (ps_lstsize(*a) > 3)
	// 2 plus petit element de a dans b
	
	// sorting_three
	sorting_three(&a);
	// 2 elements de b dans a
	while (*b) // while ((*b)->next != NULL) ??
		pa(&a, &b);
}