/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 14:25:12 by nograu            #+#    #+#             */
/*   Updated: 2025/11/16 18:09:02 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	i = 0;
	ptr = (unsigned char *)s;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s[30] = "Hello World!";
// 	int	c = 111;
// 	size_t	n = 3;

// 	printf("ft_memset: %s\n", (char *)ft_memset(s, c, n));
// 	printf("memset: %s\n", (char *)memset(s, c, n));
// 	return (0);
// }