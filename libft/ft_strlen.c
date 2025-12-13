/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 12:12:52 by nograu            #+#    #+#             */
/*   Updated: 2025/11/16 17:21:42 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

// #include <stdio.h>
// #include <string.h>

// int main(int argc, char **argv)
// {
//     if (argc != 2)
//     {
//         printf("Please enter 1 parameter.");
//         return (0);
//     }
//     printf("%ld\n", ft_strlen(argv[1]));
//     printf("%ld\n", strlen(argv[1]));
//     return (0);
// }