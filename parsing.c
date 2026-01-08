/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:24:34 by nograu            #+#    #+#             */
/*   Updated: 2026/01/08 15:46:15 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

long	ft_atoi_long(const char *nptr)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		result = result * 10 + (nptr[i] - '0');
		i++;
	}
	return (result * sign);
}

int	is_dup(char **arguments)
{
	int	i;
	int	j;

	i = 0;
	while (arguments[i])
	{
		j = i + 1;
		while (arguments[j])
		{
			if (ft_atoi_long(arguments[i]) == ft_atoi_long(arguments[j++]))
				return (write(2, "Error\n", 6), 1);
		}
		i++;
	}
	return (0);
}

int	is_over(char **arguments)
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

int	is_valid_num(char **arguments)
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

char	**parsing(int argc, char **argv)
{
	char	**arguments;
	char	**args_to_split;
	int		i;
	int		j;
	int		k;

	i = 1;
	k = 0;
	arguments = malloc(sizeof(char *) * (count_args(argc, argv) + 1));
	if (!arguments)
		return (NULL);
	while (i < argc)
	{
		args_to_split = ft_split(argv[i], ' ');
		if (!args_to_split)
			return (free_args(arguments), NULL);
		j = 0;
		while (args_to_split[j])
			arguments[k++] = args_to_split[j++];
		free(args_to_split);
		i++;
	}
	arguments[k] = NULL;
	return (arguments);
}
