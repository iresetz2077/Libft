/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: clmo <clmo@student.42nice.fr>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/16 20:37:20 by clmo             #+#    #+#              */
/*   Updated: 2026/10/17 20:34:08 by clmo            ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *a, int c, size_t n)
{
	size_t			i;
	unsigned char	*b;

	b = (unsigned char *) a;
	i = 0;
	if (n == 0)
		return (a);
	while (i < n)
	{
		*b = (unsigned char) c;
		b++;
		i++;
	}
	return (a);
}
