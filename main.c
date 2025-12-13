/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:01:24 by nograu            #+#    #+#             */
/*   Updated: 2025/12/13 18:39:34 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

#include <stdio.h> // a supprimer


///////////////////    PARSING    ///////////////////




int	main(int argc, char **argv)
{
	int		i;
	v_list	*a;
	v_list	*b;
	v_list	*current;

	a = NULL;
	b = NULL;
	i = 1;
	if (argc < 2)
		return (write(2, "Error\n", 6));
	// if () // arguments not integer, arg exceeds integer limits, duplicates int
	// 	write(0, "Error", 5);
	while (i < argc)
		ps_lstadd_back(&a, ps_lstnew(ft_atoi(argv[i++])));
	//push_swap(a_stack);
	current = a;
	printf("\nOriginal a_stack: \n");
	while (current != NULL)
	{
		printf("%d\n", current->nb);
		current = current->next;
	}

	//sa(&a);
	ss(&a, &b);
	
	current = a;
	printf("\nNew a_stack: \n");
	while (current != NULL)
	{
		printf("%d\n", current->nb);
		current = current->next;
	}
	
	return (0);
}

// *(&arr + 1) - arr calculates the difference between the pointer that points 
// to the next array &arr + 1 and the pointer that points to the first element 
// of the original array. In this case, the “next” memory area is the end of 
// the first array.

// je dois malloc et free a chaque fois que je deplace une liste chainee




// int	main(void)
// {
// 	int	i;
// 	int	a_stack[] = {2, 1, 3, 6, 5, 8}; //The first argument should be at the top of the stack (be careful about the order).
// 	int	a_length = *(&a_stack + 1) - a_stack;
// 	i = 0;
	
// 	printf("Original a_stack: ");
// 	while (i < a_length)
// 		printf("%d", a_stack[i++]);

// 	push_swap(a_stack);
	
// 	i = 0;
// 	printf("\nNew a_stack: ");
// 	while (i < a_length)
// 		printf("%d", a_stack[i++]);

// 	return (0);
// }