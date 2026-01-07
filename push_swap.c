/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:01:24 by nograu            #+#    #+#             */
/*   Updated: 2026/01/06 19:00:19 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	char	**arguments;
	int		i;

	a = NULL;
	b = NULL;
	i = 0;
	if (argc < 2)
		return (0);
	arguments = parsing(argc, argv);
	if (!arguments) // correct  ?
		return (write(2, "Error\n", 6), 1);
	if ((is_valid_num(arguments) != 0)
	 		|| (is_over(arguments) != 0)
	 		|| (is_dup(arguments) != 0))
	 			return (free_args(arguments), ft_lstclear(&a), 1);
	while (arguments[i])
		ps_lstadd_back(&a, ps_lstnew((int)ft_atoi_long(arguments[i++])));
	free_args(arguments); // pas sure, peut etre a retirer
	find_index(&a);
	sorting(&a, &b);
	ft_lstclear(&a);
	//ft_lstclear(&b); // pas necessaire car vide
	return (0);
}


	// if (argc == 2)
	// {
	// 	arguments = ft_split(argv[1], ' ');
	// 	if (!arguments || !arguments[0])
	// 		return (0);
	// 	if ((is_valid_num_split(arguments) != 0)
	// 		|| (is_over_split(arguments) != 0)
	// 		|| (is_dup_split(arguments) != 0))
	// 			return (free_split(arguments), 1);
	// 	while (arguments[i])
	// 		ps_lstadd_back(&a, ps_lstnew((int)ft_atoi_long(arguments[i++])));
	// 	free_split(arguments);
	// }
	// else
	// {
	// // cas plusieurs arguments
	// 	if ((is_valid_num(argc, argv) != 0)
	// 		|| (is_over(argc, argv) != 0)
	// 		|| (is_dup(argc, argv) != 0))
	// 			return (ft_lstclear(&a), 1);
	// 	i = 1;
	// 	while (i < argc)
	// 		ps_lstadd_back(&a, ps_lstnew((int)ft_atoi_long(argv[i++])));
	// }