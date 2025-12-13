/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:42:56 by nograu            #+#    #+#             */
/*   Updated: 2025/11/19 17:08:16 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t size)
{
	size_t	i;
	size_t	j;

	if (*s2 == '\0')
		return ((char *)s1);
	i = 0;
	while (s1[i] && i < size)
	{
		j = 0;
		while (s1[i + j] && s2[j] && (s1[i + j] == s2[j]) && ((i + j) < size))
			j++;
		if (s2[j] == '\0')
			return ((char *)&s1[i]);
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int main()
// {
// 	const char s1[] = "Valar Morghulis";
// 	const char s2[] = "Mor";
// 	size_t size = 15;

// 	char *res = ft_strnstr(s1, s2, size);
// 	printf("%s", res);
// }