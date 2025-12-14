/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:15:03 by nograu            #+#    #+#             */
/*   Updated: 2025/11/16 17:22:38 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		c += 32;
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     int c = 65;
//     printf("ft_tolower: %d is now %d.\n", c, ft_tolower(c));
//     printf("tolower: %d is now %d.", c, tolower(c));
//     return (0);
// }