/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:46:27 by nograu            #+#    #+#             */
/*   Updated: 2026/01/08 14:42:16 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

// ---------- LIBRARIES ---------- 

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
//# include <string.h>

// ---------- STRUCTURES ---------- 

typedef struct s_list
{
	int				nb;
	int				index;
	struct s_list	*next;
}					t_list;

// ---------- PARSING ---------- 

size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
char	**ft_split(char const *s, char c);
long	ft_atoi_long(const char *nptr);
int		is_dup(char **arguments);
int		is_over(char **arguments);
int		is_valid_num(char **arguments);
int		count_args(int argc, char **argv);
char	**parsing(int argc, char **argv);

// ---------- LINKED LISTS ---------- 

t_list	*ps_lstnew(int nb);
t_list	*ps_lstlast(t_list *lst);
int		ps_lstsize(t_list *lst);
void	ps_lstadd_back(t_list **lst, t_list *new);

// ---------- STACK INSTRUCTIONS ---------- 

void	sa(t_list **a);
void	instructions_sa(t_list **a);
void	sb(t_list **b);
void	instructions_sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	instructions_ra(t_list **a);
void	rb(t_list **b);
void	instructions_rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	instructions_rra(t_list **a);
void	rrb(t_list **b);
void	instructions_rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

// ---------- SORTING ---------- 

void	sorting(t_list **a, t_list **b);
void	sorting_two(t_list **a);
void	sorting_three(t_list **a);
void	sorting_four(t_list **a, t_list **b);
void	sorting_five(t_list **a, t_list **b);
void	find_index(t_list **a);
void	copy_a_to_temp(t_list **a, int *temp);
void	big_sorting(t_list **a, t_list **b);

// ---------- FREE ---------- 

void	ft_lstclear(t_list **lst);
void	free_args(char **arguments);

#endif