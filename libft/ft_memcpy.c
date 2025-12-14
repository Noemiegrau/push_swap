/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noemi <noemi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 15:38:05 by nograu            #+#    #+#             */
/*   Updated: 2025/11/19 11:45:28 by noemi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!src && !dest)
		return (dest);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	dest[30] = "";
// 	char	*src = "Hello World!";
// 	size_t	n = 8;

// 	printf("ft_memcpy: %s.\n", (char *)ft_memcpy(dest , src, n));
// 	printf("memcpy: %s.\n", (char *)memcpy(dest, src, n));
// 	return (0);
// }

////REMOVED ////*
//if (!dest && !src)
//	return (NULL);