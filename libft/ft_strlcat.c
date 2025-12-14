/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 13:38:50 by nograu            #+#    #+#             */
/*   Updated: 2025/11/16 17:59:04 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	if (size <= len_dst)
		return (len_src + size);
	i = 0;
	while (src[i] && len_dst + i < size - 1)
	{
		dst[len_dst + i] = src[i];
		i++;
	}
	dst[len_dst + i] = '\0';
	return (len_dst + len_src);
}

// #include <stdio.h>
// #include <string.h>
// int	main(void)
// {
// 	char dst[30] = "Hello";
// 	const char *src = " World!";
// 	size_t size = 8;

// 	printf("ft_strlcat: %zu\n", ft_strlcat(dst, src, size));
// 	printf("dst after: '%s'\n", dst);

// 	return (0);
// }

////REMOVED////*
// size_t	ft_strlcat(char *dst, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	len_dst;
// 	size_t	initial_len_dst;

// 	i = 0;
// 	len_dst = ft_strlen(dst);
// 	initial_len_dst = len_dst;
// 	if (size < 1)
// 		return (ft_strlen(dst) + size);
// 	while (src[i] && i < size -1)
// 	{
// 		dst[len_dst] = src[i];
// 		i++;
// 		len_dst++;
// 	}
// 	dst[len_dst] = '\0';
// 	if (size > initial_len_dst)
// 		return (initial_len_dst + ft_strlen(src));
// 	else
// 		return (ft_strlen(src) + size);
// }