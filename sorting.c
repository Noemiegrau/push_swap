/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 16:51:36 by nograu            #+#    #+#             */
/*   Updated: 2026/01/06 11:19:07 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

#include <stdio.h> // to suppr later

static int	is_sorted(t_list **a)
{
	t_list	*current;

	current = *a;
	while (current->next != NULL)
	{
		if (current->nb > current->next->nb)
			return (1);
		current = current->next;
	}
	return (0);
}

void	sorting(t_list **a, t_list **b)
{
	if (!a || !*a) // A METTRE DANS TOUTES MES FONCTIONS ?? OU PAS ??
		return ;
	if (!(is_sorted(a)))
	{
		write(1, "Success: Was already sorted\n", 28);// A SUPPR
		printf("A list is now:\n");// A SUPPR
		t_list	*temp = *a; // A SUPPR
		while (temp)// A SUPPR
		{// A SUPPR
			printf("nb: %d\n", temp->nb);// A SUPPR
			printf("index: %d\n", temp->index);// A SUPPR
			temp = temp->next;// A SUPPR
		}// A SUPPR
		return ;
	}
	else if (ps_lstsize(*a) == 2)
	{
		sorting_two(a);
		write(1, "Success: Sorted 2\n", 18);// A SUPPR
		printf("A list is now:\n");// A SUPPR
		t_list	*temp = *a; // A SUPPR
		while (temp)// A SUPPR
		{// A SUPPR
			printf("nb: %d\n", temp->nb);// A SUPPR
			printf("index: %d\n", temp->index);// A SUPPR
			temp = temp->next;// A SUPPR
		}// A SUPPR
	}
	else if (ps_lstsize(*a) == 3)
	{
		sorting_three(a);
		write(1, "Success: Sorted 3\n", 18); // A SUPPR
		printf("A list is now:\n");// A SUPPR
		t_list	*temp = *a; // A SUPPR
		while (temp)// A SUPPR
		{// A SUPPR
			printf("nb: %d\n", temp->nb);// A SUPPR
			printf("index: %d\n", temp->index);// A SUPPR
			temp = temp->next;// A SUPPR
		}// A SUPPR
	}
	else if (ps_lstsize(*a) == 4)
	{
		sorting_four(a, b);
		write(1, "Success: Sorted 4\n", 18);// A SUPPR
		printf("A list is now:\n");// A SUPPR
		t_list	*temp = *a; // A SUPPR
		while (temp)// A SUPPR
		{// A SUPPR
			printf("nb: %d\n", temp->nb);// A SUPPR
			printf("index: %d\n", temp->index);// A SUPPR
			temp = temp->next;// A SUPPR
		}// A SUPPR
	}
	else if (ps_lstsize(*a) == 5)
	{
		sorting_five(a, b);
		write(1, "Success: Sorted 5\n", 18);// A SUPPR
		printf("A list is now:\n");// A SUPPR
		t_list	*temp = *a; // A SUPPR
		while (temp)// A SUPPR
		{// A SUPPR
			printf("nb: %d\n", temp->nb);// A SUPPR
			printf("index: %d\n", temp->index);// A SUPPR
			temp = temp->next;// A SUPPR
		}// A SUPPR
	}
	else if (ps_lstsize(*a) > 5)
	{
		//big_sorting(a, b);
		write(1, "Success: Sorting big numbers\n", 29);
		printf("A list is now:\n");// A SUPPR
		t_list *temp = *a; // A SUPPR
		while (temp)// A SUPPR
		{// A SUPPR
			printf("nb: %d\n", temp->nb);// A SUPPR
			printf("index: %d\n", temp->index);// A SUPPR
			temp = temp->next;// A SUPPR
		}// A SUPPR
		return ;
	}
}

// void	sorting(t_list **a, t_list **b)
// {
// 	if (!a || !*a) // A METTRE DANS TOUTES MES FONCTIONS ?? OU PAS ??
// 		return ;
// 	if (!(is_sorted(a)))
// 		return ;
// 	else if (ps_lstsize(*a) == 2)
// 		sorting_two(a);
// 	else if (ps_lstsize(*a) == 3)
// 		sorting_three(a);
// 	else if (ps_lstsize(*a) == 4)
// 		sorting_four(a, b);
// 	else if (ps_lstsize(*a) == 5)
// 		sorting_five(a, b);
// 	else if (ps_lstsize(*a) > 5)
// 		big_sorting(a, b);
// 	return ;
// }
