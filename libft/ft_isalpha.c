/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 15:54:01 by nograu            #+#    #+#             */
/*   Updated: 2025/11/16 11:17:33 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	c  = 48;

// 	printf("%c is : %d\n",c , ft_isalpha(c));
// 	return (0);
// }
// // Boolean : 1 = true. 0 = false.