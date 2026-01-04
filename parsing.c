/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 17:24:34 by nograu            #+#    #+#             */
/*   Updated: 2026/01/04 17:25:11 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <string.h>

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

int	is_dup(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi_long(argv[i]) == ft_atoi_long(argv[j]))
				return (write(2, "Error\n", 6), 1);
			j++;
		}
		i++;
	}
	return (0);
}

int	is_over(int argc, char **argv)
{
	long	n;
	int		i;

	i = 1;
	while (i < argc)
	{
		n = ft_atoi_long(argv[i]);
		if (n < INT_MIN || n > INT_MAX)
			return (write(2, "Error\n", 6), 1);
		i++;
	}
	return (0);
}

int	is_valid_num(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		// Le premier caractère peut être +, - ou un chiffre
		if (argv[i][j] == '+' || argv[i][j] == '-')
			j++;
		// Après le signe, il doit y avoir au moins un chiffre
		if (!argv[i][j])
			return (write(2, "Error\n", 6), 1);
		// Tous les caractères restants doivent être des chiffres
		while (argv[i][j])
		{
			if (!(argv[i][j] >= '0' && argv[i][j] <= '9'))
				return (write(2, "Error\n", 6), 1);
			j++;
		}
		i++;
	}
	return (0);
}