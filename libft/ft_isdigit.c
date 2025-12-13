/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 16:59:49 by nograu            #+#    #+#             */
/*   Updated: 2025/11/16 18:07:03 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c >= 48 && c <= 57);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	c = 48;

// 	if (ft_isdigit(c))
// 		printf("%c is digit", c);
// 	else 
// 		printf("%c is not a digit", c);

// 	return (0);
// }