/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:01:24 by nograu            #+#    #+#             */
/*   Updated: 2025/12/18 16:32:27 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

#include <stdio.h> // a supprimer

long ft_atoi_long(const char *nptr)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

int	is_dup(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (write(2, "Error\n", 6), 1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_over(int argc, char **argv)
{ 
	long	n;
	int		i;

	i = 1;
	while (i < argc)
	{
		n = ft_atoi_long(argv[i]);
		if (n < INT_MIN || n > INT_MAX)
			return (write(2, "Error\n", 6), 1);
		i++;
	}
	return (0);
}

int	is_valid_num(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		if (argv[i][0] == '\0' || (ft_strlen(argv[i]) == 1 && (argv[i][0] == '+' || argv[i][0] == '-')))
			return (write(2, "Error\n", 6), 1);
		j = 0;
		if (argv[i][j] == '+' || argv[i][j] == '-')
			j++;
		while (argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				return (write(2, "Error\n", 6), 1);
			j++;
		}
		i++;
	}
	return (0);
}

int	main(int argc, char **argv)
{
	int		i;
	v_list	*a;
	v_list	*b;

	a = NULL;
	b = NULL;
	i = 1;
	if (argc < 2)
		return (0);
	if (is_valid_num(argc, argv)) // if(0) if (isvalnum() != 0) -> if (1)
		return (1);
	if (is_dup(argc, argv))
		return (1);
	if (is_over(argc, argv))
		return (1);
	while (i < argc)
		ps_lstadd_back(&a, ps_lstnew(ft_atoi(argv[i++])));
	// algo
	write(1, "Success\n", 8);
	return (0);
}







	// current = a;
	// printf("\nOriginal a_stack: \n");
	// while (current != NULL)
	// {
	// 	printf("%d\n", current->nb);
	// 	current = current->next;
	// }
	// current = a;
	// printf("\nNew a_stack: \n");
	// while (current != NULL)
	// {
	// 	printf("%d\n", current->nb);
	// 	current = current->next;
	// }








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