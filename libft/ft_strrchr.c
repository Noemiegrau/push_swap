/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: noemi <noemi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 18:41:15 by nograu            #+#    #+#             */
/*   Updated: 2025/11/19 12:22:32 by noemi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	str = NULL;
	while (*s)
	{
		if (*s == (char)c)
			str = s;
		s++;
	}
	if (str != NULL)
		return ((char *)str);
	if (!(char)c)
		return ((char *)s);
	return (NULL);
}

// #include <stdio.h>

// int main(void)
// {
// 	char s[] = "Hello World!";
// 	int c = 'o';
// 	char	*result = ft_strrchr(s, c);
// 	if (result)
// 		printf("%s\n", result);
// 	else
// 	printf("nope, sorry");
// }

// char	*ft_strrchr(const char *s, int c)
// {
// 	int	i;

// 	if (!s)
// 		return (NULL);
// 	i = ft_strlen(s);
// 	if ((unsigned char)c == '\0')
// 		return ((char *)&s[i]);
// 	while (i >= 0)
// 	{
// 		if ((unsigned char)s[i] == (unsigned char)c)
// 			return ((char *)&s[i]);
// 		i--;
// 	}
// 	return (NULL);
// }