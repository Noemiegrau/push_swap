/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noemi <noemi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:56:15 by nograu            #+#    #+#             */
/*   Updated: 2025/11/19 12:09:12 by noemi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	if (!dest && !src)
		return (NULL);
	if (src > dest)
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)(dest))[i] = ((unsigned char *)(src))[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i-- > 0)
			((unsigned char *)(dest))[i] = ((unsigned char *)(src))[i];
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	dest[30] = "";
// 	char	*src = "Hello World!";
// 	size_t	n = 30;

// 	printf("ft_memmove: %s.\n", (char *)ft_memmove(dest, src, n));
// 	printf("memmove: %s.\n", (char *)memmove(dest, src, n));
// 	return (0);
// }

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	unsigned char		*d;
// 	const unsigned char	*s;

// 	if (!dest && !src)
// 		return (NULL);
// 	d = (unsigned char *)dest;
// 	s = (const unsigned char *)src;
// 	if (d < s)
// 		ft_memcpy(dest, src, n);
// 	else
// 	{
// 		while (n--)
// 			d[n] = s[n];
// 	}
// 	return (dest);
// }

////REMOVED ////*
//if (!dest && !src)
//	return (NULL);