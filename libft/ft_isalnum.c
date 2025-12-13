/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:50:58 by nograu            #+#    #+#             */
/*   Updated: 2025/11/16 11:14:06 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return ((c >= 65 && c <= 90)
		|| (c >= 97 && c <= 122)
		|| (c >= 48 && c <= 57));
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
// 	int c = 0;

// 	if (ft_isalnum(c))
// 		printf("%d is an alpha-num", c);
// 	else 
// 		printf("%d is not an alpha-num", c);
// 	return (0);
// }

///// NE FONCTIONNE PAS \\\\\*

// int main(int argc, char **argv)
// {
// 	if (argc != 2)
// 	{
// 		printf("Please enter only 1 parameter");
// 		return (0);
// 	}
// 	if (ft_isalnum(atoi(argv[1])))
// 		printf("%d is an alpha-num", atoi(argv[1]));
// 	else 
// 		printf("%d is not an alpha-num", atoi(argv[1]));
// 	return (0);
// }