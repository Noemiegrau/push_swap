/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/13 15:01:24 by nograu            #+#    #+#             */
/*   Updated: 2026/01/04 18:48:09 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_list(t_list **lst)
{
	t_list	*temp;

	while (*lst)
	{
		temp = (*lst)->next;
		free(*lst);
		*lst = temp;
	}
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	int		i;

	a = NULL;
	b = NULL;
	i = 1;
	if (argc < 2)
		return (0);
	if (is_valid_num(argc, argv) != 0)
		return (free_list(&a), 1);
	if (is_over(argc, argv) != 0)
		return (free_list(&a), 1);
	if (is_dup(argc, argv) != 0)
		return (free_list(&a), 1);
	while (i < argc)
		ps_lstadd_back(&a, ps_lstnew((int)ft_atoi_long(argv[i++])));
	nbr_to_index(&a);
	sorting(&a, &b);
	free_list(&a);
	free_list(&b);
	return (0);
}
