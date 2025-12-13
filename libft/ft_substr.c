/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 15:49:00 by nograu            #+#    #+#             */
/*   Updated: 2025/11/19 15:47:14 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*sub;
	unsigned int	i;
	size_t			len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (start >= len_s)
		return (ft_strdup(""));
	if (len > len_s - start)
		len = len_s - start;
	sub = malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s[] = "Hello World! Hello World! Hello World!";
// 	char	*sub;
// 	//char	s[] = "";
// 	unsigned int	start = 0;
// 	size_t	len = 8;
// 	sub = ft_substr(s, start, len);

// 	printf("Substr: %s\n", sub);
// 	free(sub);
// 	return (0);
// }