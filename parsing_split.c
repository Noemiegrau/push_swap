/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_split.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 12:10:55 by nograu            #+#    #+#             */
/*   Updated: 2026/01/06 12:42:03 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_dup_split(char **arguments)
{
	int	i;
	int	j;

	i = 1;
	while (arguments[i])
	{
		j = i + 1;
		while (arguments[i])
		{
			if (ft_atoi_long(arguments[i]) == ft_atoi_long(arguments[j]))
				return (write(2, "Error\n", 6), 1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_over_split(char **arguments)
{
	long	n;
	int		i;

	i = 0;
	while (arguments[i])
	{
		n = ft_atoi_long(arguments[i]);
		if (n < INT_MIN || n > INT_MAX)
			return (write(2, "Error\n", 6), 1);
		i++;
	}
	return (0);
}

int	is_valid_num_split(char **arguments)
{
	int	i;
	int	j;

	i = 0;
	while (arguments[i])
	{
		j = 0;
		if (arguments[i][j] == '+' || arguments[i][j] == '-')
			j++;
		if (!arguments[i][j])
			return (write(2, "Error\n", 6), 1);
		while (arguments[i][j])
		{
			if (!(arguments[i][j] >= '0' && arguments[i][j] <= '9'))
				return (write(2, "Error\n", 6), 1);
			j++;
		}
		i++;
	}
	return (0);
}