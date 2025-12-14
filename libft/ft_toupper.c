/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:49:55 by nograu            #+#    #+#             */
/*   Updated: 2025/11/16 17:22:26 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     int c = 110;
//     printf("ft_toupper: %d is now %d.\n", c, ft_toupper(c));
//     printf("toupper: %d is now %d.", c, toupper(c));
//     return (0);
// }