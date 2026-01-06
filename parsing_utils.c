/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nograu <nograu@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/06 11:20:41 by nograu            #+#    #+#             */
/*   Updated: 2026/01/06 12:44:18 by nograu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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

static char	*ft_substr(char const *s, unsigned int start, size_t len)
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
