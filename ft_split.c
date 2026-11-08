/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: username <username@student.42tokyo.jp>    #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/17 21:03:06 by username         #+#    #+#              */
/*   Updated: 2026/11/08 10:14:08 by username        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_freearray(char **array, size_t n)
{
	size_t	i;

	i = 0;
	if (n)
		i = n - 1;
	while (i)
	{
		free(array[i]);
		i--;
	}
	if (n)
		free(array[0]);
	free(array);
	return (NULL);
}

static size_t	ft_countwords(const char *s, int c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i])
				i++;
		}
		if (s[i])
			i++;
	}
	return (count);
}

static char	**ft_transfer(char **array, char *src, char c)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (*src)
	{
		if (*src != c)
		{
			while (*src != c && *src)
			{
				array[i][j] = *src;
				src++;
				j++;
			}
			array[i][j] = 0;
			i++;
			j = 0;
		}
		if (*src)
			src++;
	}
	return (array);
}

static char	**ft_mallocarray(char **array, const char *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	letter;

	i = 0;
	j = 0;
	while (s[i])
	{
		letter = 0;
		if (s[i] != c)
		{
			while (s[i] != c && s[i])
			{
				letter++;
				i++;
			}
			array[j] = malloc(sizeof(char) * (letter + 1));
			if (array[j] == 0)
				return (ft_freearray(array, j));
			j++;
		}
		if (s[i])
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
	words = ft_countwords(s, c);
	array = malloc(sizeof(char *) * (words + 1));
	if (array == 0)
		return (NULL);
	array = ft_mallocarray(array, s, c);
	if (array == NULL)
		return (NULL);
	array[words] = NULL;
	array = ft_transfer(array, src, c);
	return (array);
}
