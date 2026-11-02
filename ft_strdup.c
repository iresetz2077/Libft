/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strdup.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: clmo <clmo@student.42nice.fr>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/17 21:03:18 by clmo             #+#    #+#              */
/*   Updated: 2026/10/21 20:06:12 by clmo            ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int				i;
	unsigned char	*dest;

	i = 0;
	dest = (unsigned char *) s;
	dest = malloc(ft_strlen(s) + 1);
	if (dest == 0)
		return (NULL);
	while (dest[i] && i < ft_strlen(s))
	{
		dest[i] = s[i];
		i++;
	}
	if (ft_strlen(s) > 0)
		dest[i] = 0;
	return (dest);
}
