/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 11:50:53 by nograu            #+#    #+#             */
/*   Updated: 2025/11/20 15:52:09 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	calcul;

	if (nmemb != 0 && size != 0 && nmemb > SIZE_MAX / size)
		return (NULL);
	calcul = nmemb * size;
	ptr = malloc(calcul);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, calcul);
	return (ptr);
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	*tab;
// 	size_t	i;

// 	tab = ft_calloc(2, sizeof(int));
// 	if (!tab)
// 	{
// 		printf("allocation failed and calloc returned NULL\n");
// 		return (1);
// 	}
// 	i = 0;
// 	while (tab[i])
// 	{
// 		printf("tab[%zu] = %d\n", i, tab[i]);
// 		i++;
// 	}
// 	free(tab);
// 	return (0);
// }