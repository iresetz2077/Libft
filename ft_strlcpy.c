/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcpy.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: clmo <clmo@student.42nice.fr>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/17 21:03:33 by clmo             #+#    #+#              */
/*   Updated: 2026/10/17 21:58:43 by clmo            ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t dsize)
{
	size_t			i;
	unsigned char	*s;

	i = 0;
	s = (unsigned char *) src;
	while (s[i] && i + 1 < dsize)
	{
		dest[i] = s[i];
		i++;
	}
	if (dsize > 0)
		dest[i] = 0;
	return (ft_strlen(src));
}
