/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:01:24 by nograu            #+#    #+#             */
/*   Updated: 2025/12/31 13:27:59 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./libft/libft.h"

#include <stdio.h> // a supprimer
#include <string.h>

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
			if (ft_atoi_long(argv[i]) == ft_atoi_long(argv[j]))
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
		j = 0;
		// Le premier caractère peut être +, - ou un chiffre
		if (argv[i][j] == '+' || argv[i][j] == '-')
			j++;
		// Après le signe, il doit y avoir au moins un chiffre
		if (!argv[i][j])
			return (write(2, "Error\n", 6), 1);
		// Tous les caractères restants doivent être des chiffres
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
	if (is_valid_num(argc, argv) != 0)
		return (1);
	if (is_over(argc, argv) != 0)
		return (1);
	if (is_dup(argc, argv) != 0)
		return (1);
	while (i < argc)
		ps_lstadd_back(&a, ps_lstnew((int)ft_atoi_long(argv[i++])));
	small_sorting(&a, &b);
	//small_sorting(&a);  // to suppr later
	// if (is_sorted(&a))
	// {
	// 	write(1, "Success: Was already sorted\n", 28);
	// 	return (0);
	// }
	// else if (ps_lstsize(&a) == 2)
	// {
	// 	sorting_two(&a);
	// 	write(1, "Success: Sorted 2\n", 18);
	// }
	// else if (ps_lstsize(&a) == 3)
	// {
	// 	sorting_three(&a);
	// 	write(1, "Success: Sorted 3\n", 18);
	// }
	// else if (ps_lstsize(&a) == 4 || ps_lstsize(&a) == 5) // et 4 aussi ?
	// {
	// 	sorting_five(&a);
	// 	write(1, "Success: Sorted 5\n", 18);
	// }
	// else  // big algo
	// {
	// 	write(1, "Unsuccessful\n",13);
	// 	return (0);
	// }
	return (0);
}