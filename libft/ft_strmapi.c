/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:19:53 by nograu            #+#    #+#             */
/*   Updated: 2025/11/19 15:43:35 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// char	to_upper_mapi(unsigned int i, char c)
// {
// 	(void)i;
// 	if (c >= 'a' && c <= 'z')
// 		c -= 32;
// 	return (c);
// }

// #include <stdio.h>

// int	main(void)
// {
// 	char	s[30] = "Hello World!";
// 	char	*result;

// 	printf("Avant: %s\n", s);
// 	result = ft_strmapi(s, to_upper_mapi);
// 	printf("Apres: %s\n", result);
// 	free(result);
// 	return (0);
// }