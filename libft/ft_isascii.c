/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:17:30 by nograu            #+#    #+#             */
/*   Updated: 2025/11/16 11:18:52 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return ((c >= 0 && c <= 127));
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char **argv)
// {
//     if (argc != 2)
//     {
//         printf("Please enter only 1 parameter.");
//         return (0);
//     }
//     if (ft_isascii(atoi(argv[1])))
//         printf("%d is ascii", atoi(argv[1]));
//     else
//         printf("%d is not ascii", atoi(argv[1]));
//     return (0);
// }