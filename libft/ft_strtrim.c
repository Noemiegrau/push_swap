/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 13:30:32 by nograu            #+#    #+#             */
/*   Updated: 2025/11/19 15:46:28 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*s;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	s = malloc(end - start + 1);
	if (!s)
		return (NULL);
	ft_memcpy(s, s1 + start, end - start);
	s[end - start] = '\0';
	return (s);
}

// #include <stdio.h>
// int	main(void)
// {
// 	//char	s1[30] = "   !Hello World!! !";
// 	char	s1[30] = "";
// 	//char	s1[30] = "   !!! !";
// 	char	set[30] = " !";
// 	char	*result;

// 	result = ft_strtrim(s1, set);
// 	printf("Avant: %s\n", s1);
// 	printf("Apres: %s\n", result);
// 	free(result);
// 	return (0);
// }