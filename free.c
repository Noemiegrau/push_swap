/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 18:53:18 by nograu            #+#    #+#             */
/*   Updated: 2026/01/04 22:11:29 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_lstdelone(t_list **lst)
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
