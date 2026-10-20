/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strncpm.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: clmo <clmo@student.42nice.fr>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/17 21:03:45 by clmo             #+#    #+#              */
/*   Updated: 2026/10/18 21:00:31 by clmo            ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
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
