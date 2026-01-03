/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 16:51:36 by nograu            #+#    #+#             */
/*   Updated: 2026/01/03 17:06:35 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h> // to suppr later

int	is_sorted(t_list **a)
{
	t_list	*current;

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

void	small_sorting(t_list **a, t_list **b)
{
	if (!a || !*a) // A METTRE DANS TOUTES MES FONCTIONS ?? OU PAS ??
		return ;
	if (!(is_sorted(a)))
	{
		write(1, "Success: Was already sorted\n", 28);// A SUPPR
		printf("A list is now:\n");// A SUPPR
		while (*a)// A SUPPR
		{// A SUPPR
			printf("%d\n", (*a)->nb);// A SUPPR
			(*a) = (*a)->next;// A SUPPR
		}// A SUPPR
		return ;
	}
	else if (ps_lstsize(*a) == 2)
	{
		sorting_two(a);
		write(1, "Success: Sorted 2\n", 18);// A SUPPR
		printf("A list is now:\n");// A SUPPR
		while (*a)// A SUPPR
		{// A SUPPR
			printf("%d\n", (*a)->nb);// A SUPPR
			(*a) = (*a)->next;// A SUPPR
		}// A SUPPR
	}
	else if (ps_lstsize(*a) == 3)
	{
		sorting_three(a);
		write(1, "Success: Sorted 3\n", 18); // A SUPPR
		printf("A list is now:\n");// A SUPPR
		while (*a)// A SUPPR
		{// A SUPPR
			printf("%d\n", (*a)->nb);// A SUPPR
			(*a) = (*a)->next;// A SUPPR
		}// A SUPPR
	}
	else if (ps_lstsize(*a) == 4 || ps_lstsize(*a) == 5)
	{
		sorting_five(a, b);
		write(1, "Success: Sorted 5\n", 18);// A SUPPR
		printf("A list is now:\n");// A SUPPR
		while (*a)// A SUPPR
		{// A SUPPR
			printf("%d\n", (*a)->nb);// A SUPPR
			(*a) = (*a)->next;// A SUPPR
		}// A SUPPR
	}
	else// see big algo later in main
	{
		write(1, "Unsuccessful\n", 13);
		return ;
	}
}

void	sorting_two(t_list **a)
{
	t_list	*current;

	if (!a || !*a)
		return ;
	current = *a;
	if (current->nb > current->next->nb)
		sa(&current);
}

void	sorting_three(t_list **a)
{
	int		f;
	int		s;
	int		t;

	if (!a || !*a)
		return ;
	f = (*a)->nb;
	s = (*a)->next->nb;
	t = (*a)->next->next->nb;
	if (f > s && s > t && f > t) // 321
	{
		sa(a);
		rra(a);
	}
	else if (f > s && s < t && f < t) // 213
		sa(a);
	else if (f < s && s > t && f < t) // 132
	{
		sa(a);
		ra(a);
	}
	else if (f > s && s < t && f > t) // 312
		ra(a);
	else if (f < s && s > t && f > t)// 231
		rra(a);
}

void	sorting_five(t_list **a, t_list **b)
{
	if (!a || !*a)
		return ;
	smallest_up(a);
	pb(a, b);
	if (ps_lstsize(*a) == 4)
	{
		smallest_up(a);
		pb(a, b);
	}
	sorting_three(a);
	if (ps_lstsize(*b) == 2 && (*b)->nb < (*b)->next->nb)
		sb(b);
	pa(a, b);
	pa(a, b);
}
