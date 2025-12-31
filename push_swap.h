/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:46:27 by nograu            #+#    #+#             */
/*   Updated: 2025/12/31 16:32:25 by nograu           ###   ########.fr       */
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
}					t_list;

// FILES SRC

int		*push_swap(int *a_stack);
int		main(int argc, char **argv);
t_list	*ps_lstnew(int nb);
void	ps_lstadd_back(t_list **lst, t_list *new);
//void	ps_lstadd_front(t_list **lst, t_list *new);
//void	ps_lstdelone(t_list *lst, void (*del)(void *));
t_list	*ps_lstlast(t_list *lst);
int		ps_lstsize(t_list *lst);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
int		is_sorted(t_list **a);
void	small_sorting(t_list **a, t_list **b); // to suppr later
//void	small_sorting(t_list **a);
void	sorting_two(t_list **a);
void	sorting_three(t_list **a);
int		smallest_num(t_list *a);
void	smallest_up(t_list **a);
void	sorting_five(t_list **a, t_list **b);

#endif