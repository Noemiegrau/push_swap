/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 18:53:18 by nograu            #+#    #+#             */
/*   Updated: 2026/01/08 14:49:13 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_lstdelone(t_list **lst)
{
	if (lst && *lst)
	{
		free(*lst);
		*lst = NULL;
	}
}

void	ft_lstclear(t_list **lst)
{
	t_list	*temp;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(lst);
		*lst = temp;
	}
	*lst = NULL;
}

void	free_args(char **arguments)
{
	int	i;

	i = 0;
	if (!arguments)
		return ;
	while (arguments[i])
		free(arguments[i++]);
	free(arguments);
}
