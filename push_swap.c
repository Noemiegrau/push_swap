/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:01:24 by nograu            #+#    #+#             */
/*   Updated: 2026/01/08 14:48:06 by nograu           ###   ########.fr       */
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
