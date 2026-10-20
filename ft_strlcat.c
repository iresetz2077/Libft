/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: clmo <clmo@student.42nice.fr>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/17 21:03:29 by clmo             #+#    #+#              */
/*   Updated: 2026/10/17 22:54:54 by clmo            ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t dssize)
{
	size_t			i;
	size_t			j;
	unsigned char	*s;

	j = 0;
	i = ft_strlen(dest);
	s = (unsigned char *) src;
	while (s[j] && j < dssize)
	{
		dest[i] = s[j];
		i++;
		j++;
	}
	while (i < dssize)
	{
		dest[i] = 0;
		i++;
	}
	if (dssize == 0)
		return (ft_strlen(s));
	return (ft_strlen(dest));
}
