/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: clmo <clmo@student.42nice.fr>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/17 21:03:06 by clmo             #+#    #+#              */
/*   Updated: 2026/10/17 21:03:08 by clmo            ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_freearray(char **array, size_t n)
{
	size_t	i;

	i = n - 1;
	while (i >= 0)
	{
		free(array[i]);
		i--;
	}
	free(array);
}

static size_t	ft_countwords(const char *s, int c)
{
	size_t	count;
	size_t	i;

	while (str[i])
	{
		if (str[i] == (unsigned char) c && str[i - 1] != c)
			count++;
		i++;
	}
	if (str[i - 1] != c)
		count++;
	return (count);
}

static char	**ft_transfer(char **array, size_t words, char *src, char c)
{
	size_t	i;
	size_t	j;

	while (*src)
	{
		while (*src != c)
		{
			array[i][j] = *src;
			src++;
			j++;
		}
		if (*src == c)
			array[i][j] = 0;
		else
			return (array);
		i++;
		j = 0;
	}
	return (array);
}

static char	**ft_mallocarray(const char s, char c, size_t words)
{
	size_t	i;
	size_t	j;
	size_t	letter;
	char	**array;

	i = 0;
	j = 0;
	while (words)
	{
		letter = 0;
		while (s[i] != c && s[i])
		{
			letter++;
			i++;
		}
		array[j] = malloc(sizeof(char) * letter + 1);
		if (array[j] == 0)
		{
			ft_freearray(array, j);
			return (NULL);
		}
		j++;
		i++;
	}
	return (array);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	char	*src;
	size_t	words;

	src = (char *) s;
	array = malloc(sizeof(char *) * words + 1);
	if (array == 0)
		return (NULL);
	words = ft_countwords(s, c);
	array = ft_mallocarray(s, c, words);
	array[words] = malloc(sizeof(char) * 1);
	if (array[words] == 0)
	{
		ft_freearray(array, words);
		return (NULL);
	}
	array = ft_transfer(array, words, src, c);
	array[words][0] = NULL;
	return (array);
}
