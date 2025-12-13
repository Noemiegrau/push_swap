/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/08 16:46:27 by nograu            #+#    #+#             */
/*   Updated: 2025/12/13 15:15:47 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
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
int		main(int argc, char **argv);
v_list	*ps_lstnew(int nb);
void	ps_lstadd_back(v_list **lst, v_list *new);

#endif