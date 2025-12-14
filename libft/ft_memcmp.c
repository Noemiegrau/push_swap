/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 18:13:24 by nograu            #+#    #+#             */
/*   Updated: 2025/11/16 18:08:01 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*s11;
	const unsigned char	*s22;
	size_t				i;

	if (!s1 && !s2)
		return (0);
	s11 = (const unsigned char *)s1;
	s22 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s11[i] != s22[i])
			return ((int)(s11[i] - s22[i]));
		i++;
	}
	return (0);
}
// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s1[30] = "a";
// 	char	s2[30] = "abcde";
// 	size_t	n = 10;

// 	printf("ft_memcmp: %d.\n", (int)ft_memcmp(s1, s2, n));
// 	printf("memcmp: %d.\n", (int)memcmp(s1, s2, n));
// 	return (0);
// }