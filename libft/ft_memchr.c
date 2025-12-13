/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 17:49:32 by nograu            #+#    #+#             */
/*   Updated: 2025/11/16 18:07:40 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*s1;
	size_t				i;

	i = 0;
	s1 = (const unsigned char *)s;
	while (i < n)
	{
		if (s1[i] == (const unsigned char)c)
			return ((void *)&s1[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s[] = "Hello a world!";
// 	int	c = 97;
// 	size_t n = 7;

// 	printf("ft_memchr: %s.\n", (char *)ft_memchr(s, c, n));
// 	printf("memchr: %s.\n", (char *)memchr(s, c, n));
// 	return (0);
// }

////REMOVED////*
//if (!s)
//	return (NULL);