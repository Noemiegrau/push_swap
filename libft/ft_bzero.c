/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:09:56 by nograu            #+#    #+#             */
/*   Updated: 2025/11/16 18:06:46 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = '\0';
		i++;
	}
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s[30] = "Hello World!";
// 	char	s2[30] = "Hello World!";
// 	size_t	n = 4;
// 	size_t	i = 0;

// 	ft_bzero(s, n);
// 	bzero(s2, n);

// 	printf("ft_bzero : \n");
// 	while (i < 13)
// 	{
// 		printf("%d, ", s[i]);
// 		i++;
// 	}
// 	printf("\n");
// 	printf("bzero : \n");
// 	i = 0;
// 	while (i < 13)
// 	{
// 		printf("%d, ", s2[i]);
// 		i++;
// 	}
// 	return (0);
// }