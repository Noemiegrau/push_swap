/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:46:27 by nograu            #+#    #+#             */
/*   Updated: 2025/12/31 13:28:09 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
//# include <stdint.h>

// STRUCT

typedef struct w_list
{
	int				nb;
	struct w_list	*next;
}					v_list;

// FILES SRC

int		*push_swap(int *a_stack);
int		main(int argc, char **argv);
v_list	*ps_lstnew(int nb);
void	ps_lstadd_back(v_list **lst, v_list *new);
//void	ps_lstadd_front(v_list **lst, v_list *new);
//void	ps_lstdelone(v_list *lst, void (*del)(void *));
v_list	*ps_lstlast(v_list *lst);
int		ps_lstsize(v_list *lst);
void	sa(v_list **a);
void	sb(v_list **b);
void	ss(v_list **a, v_list **b);
void	pa(v_list **a, v_list **b);
void	pb(v_list **a, v_list **b);
void	ra(v_list **a);
void	rb(v_list **b);
void	rr(v_list **a, v_list **b);
void	rra(v_list **a);
void	rrb(v_list **b);
void	rrr(v_list **a, v_list **b);
int		is_sorted(v_list **a);
void	small_sorting(v_list **a, v_list **b); // to suppr later
//void	small_sorting(v_list **a);
void		sorting_two(v_list **a);
void		sorting_three(v_list **a);
void		sorting_five(v_list **a, v_list **b);
int		smallest_num(v_list *a);

#endif