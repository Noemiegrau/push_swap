/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 14:03:53 by nograu            #+#    #+#             */
/*   Updated: 2025/11/21 12:51:27 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	free_tab(char **tab, int words)
{
	while (words--)
		free(tab[words]);
	free(tab);
}

static void	check_end(char c, const char *s, int *i, int *start)
{
	*start = *i;
	while (s[*i] && s[*i] != c)
		(*i)++;
}

static int	ft_cw(char	const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		words;
	int		start;
	int		i;

	i = 0;
	words = 0;
	if (!s)
		return (NULL);
	result = (char **)malloc(sizeof(char *) * (ft_cw(s, c) + 1));
	if (!result)
		return (NULL);
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			check_end(c, s, &i, &start);
			result[words++] = ft_substr(s, start, i - start);
			if (!result[words - 1])
				return (free_tab(result, --words), NULL);
		}
	}
	return (result[words] = NULL, result);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	s[50] = "   Je suis une loutre ...   ";
// 	char	c = ' ';
// 	char	**result;
// 	int	i = 0;

// 	result = ft_split(s, c);

// 	printf("Result is:\n");
// 	while (result && result[i])
// 	{
// 		printf("%s\n", result[i]);
// 		free(result[i]);
// 		i++;
// 	}
// 	free(result);
// 	return (0);
// }

// result[words] = (char *)malloc(sizeof(char) * (i - start) + 1);
// ft_strlcpy(result[words++], &s[start], i - start + 1); //remplacer par substr