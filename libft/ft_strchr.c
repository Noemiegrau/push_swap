/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:35:27 by nograu            #+#    #+#             */
/*   Updated: 2025/11/16 17:58:38 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

// #include <stdio.h>
// # include <string.h>

// int main(void)
// {
// 	char s[] = "bonjour";
// 	int c = 'j';

// 	char *result1 = ft_strchr(s, c);
// 	char *result2 = strchr(s, c);
// 	if (result1)
// 		printf("%s\n", result1);
// 	else
// 		printf("ft_strchr: NULL\n");
// 	if (result2)
// 		printf("%s\n", result2);
// 	else
// 		printf("strchr: NULL\n");	
// 	return (0);
// }