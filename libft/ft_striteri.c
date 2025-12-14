/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 11:09:45 by nograu            #+#    #+#             */
/*   Updated: 2025/11/16 17:58:54 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

// void	to_upper_iteri(unsigned int i, char *c)
// {
// 	if ((i || i == 0) && *c >= 'a' && *c <= 'z')
// 		*c -= 32;
// }

// #include <stdio.h>
// int	main(void)
// {
// 	char	s[30] = "Hello World!";

// 	printf("%s\n", s);
// 	ft_striteri(s, to_upper_iteri);
// 	printf("%s\n", s);
// 	return (0);
// }