/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 10:26:05 by nograu            #+#    #+#             */
/*   Updated: 2025/11/16 17:28:09 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && i < n && s1[i] == s2[i])
		i++;
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int main(void)
// {
// 	char	*s1 = "bd";
// 	char	*s2 = "zbc";
// 	size_t	n = 2;

// 	printf("ft_strncmp: %d.\n", ft_strncmp(s1, s2, n));
// 	printf("strncmp: %d.", strncmp(s1, s2, n));

// 	return (0);
// }

////REMOVED////*
// int	ft_strncmp(const char *s1, const char *s2, size_t n)
// {
// 	size_t	i;

// 	if (n == 0)
// 		return (0);
// 	i = 0;
// 	while (s1[i] && s2[i] && i < n -1 && s1[i] == s2[i])
// 		i++;
// 	return (s1[i] - s2[i]);
// }