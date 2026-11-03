/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: clmo <clmo@student.42nice.fr>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/17 21:03:53 by clmo             #+#    #+#              */
/*   Updated: 2026/10/18 20:24:27 by clmo            ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	*p;
	unsigned char	*res;

	res = NULL;
	p = (unsigned char *) s;
	if ((unsigned char) c == 0)
		res = p + ft_strlen(s);
	while (*p)
	{
		if (*p == (unsigned char) c)
			res = p;
		p++;
	}
	return ((char *) res);
}
