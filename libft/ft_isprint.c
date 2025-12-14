/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 11:32:55 by nograu            #+#    #+#             */
/*   Updated: 2025/11/16 11:23:15 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	return ((c >= 32 && c <= 126));
}

// #include <stdio.h>

// int main(void)
// {
//     int c = 127;

//     if (ft_isprint(c))
//         printf("%d is printable", c);
//     else
//         printf("%d is not printable", c);
//     return (0);
// }