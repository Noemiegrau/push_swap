/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 12:00:51 by nograu            #+#    #+#             */
/*   Updated: 2025/11/16 18:06:02 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*temp_new_content;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst != NULL)
	{
		temp_new_content = f(lst->content);
		new_node = ft_lstnew(temp_new_content);
		if (!new_node)
		{
			del(temp_new_content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}

// void	test_ft_lstnew_bonus(void *content)
// {
// 	t_list	*node_to_print;

// 	node_to_print = ft_lstnew(content);
// 	printf("%s\n", (char *)node_to_print->content);
// }

// void	test_ft_lstadd_front(t_list **lst, t_list *new)
// {

// }

// void multi(void *head)
// {
// 	(void)head;
// }

// 	void del(void *content)
// {	
// 	free(content);
// }

// int	main(void)
// {
// 	// test_ft_lstnew_bonus("Node->content: Valar Morghulis.\n");
// 	// test_ft_lstadd_front("Hi, I'm a new front node.");
// 	// test_ft_lstsize();
// 	// test_ft_lstlast();
// 	// test_ft_lstadd_back();
// 	// test_ft_lstdelone();
// 	// test_ft_lstclear();
// 	// test_ft_lstiter();
// 	// test_f_lstmap();

// 	t_list	*head;
// 	t_list	*current;
// 	t_list	*new;

// 	///////////////// Creating HEAD of the list \\\\\\\\\\\\\\\\\*

// 	head = ft_lstnew("Valar Morghulis");

// 	///////////////// ADDING BACK node to the list \\\\\\\\\\\\\\\\\*

// 	printf("ADD BACK head location: %p\n", head);
// 	new = ft_lstnew("Valar Morghulis");
// 	ft_lstadd_back(&head, new);

// 	///////////////// ADDING FRONT node to the list \\\\\\\\\\\\\\\\\*

// 	printf("ADD FRONT head location: %p\n", head);
// 	new = ft_lstnew("Valar Morghulis");
// 	ft_lstadd_front(&head, new);

// 	///////////////// APPLYING fonction to the list \\\\\\\\\\\\\\\\\*

// 	//ft_lstiter(head, &multi);

// 	///////////////// PRINTING THE LIST \\\\\\\\\\\\\\\\\*

// 	current = head;
// 	while (current != NULL)
// 	{
// 		printf("LISTE: %s\n", (char *)current->content);
// 		current = current->next;
// 	}
// 	printf("Last of the LISTE: %s\n", (char *)current);

// 	///////////////// COUNTING NUMBER OF NODES IN A LIST \\\\\\\\\\\\\\\\\*

// 	printf("There are %d nodes in this list.\n", ft_lstsize(head));

// 	///////////////// RETURNING THE LAST NODE OF THE LIST \\\\\\\\\\\\\\\\\*

// 	t_list	*last_node = ft_lstlast(head);
// 	printf("last node of this list : -> %s\n <-", (char *)last_node->content);

// 	///////////////// LST DEL ONE \\\\\\\\\\\\\\\\\*

// 	//ft_lstdelone(head, del);
// 	return (0);
// }