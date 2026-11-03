/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_substr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: clmo <clmo@student.42nice.fr>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/17 21:04:01 by clmo             #+#    #+#              */
/*   Updated: 2026/10/17 21:04:03 by clmo            ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	unsigned char	*dest;
	size_t			i;

	i = 0;
	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	dest = malloc(sizeof(unsigned char) * len + 1);
	if (dest == 0)
		return (NULL);
	while (s[start] && i < len)
	{
		dest[i] = s[start];
		i++;
		start++;
	}
	dest[i] = '\0';
	return ((char *) dest);
}
