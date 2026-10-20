/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memcmp.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: clmo <clmo@student.42nice.fr>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/17 21:02:38 by clmo             #+#    #+#              */
/*   Updated: 2026/10/18 21:00:12 by clmo            ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*prim;
	unsigned char	*sec;

	prim = (unsigned char *) s1;
	sec = (unsigned char *) s2;
	while (n-- && *prim == *sec)
	{
		prim++;
		sec++;
	}
	return (*prim - *sec);
}
