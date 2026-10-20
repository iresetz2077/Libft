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
	long			count;
	long			last;
	unsigned char	*p;

	count = 0;
	p = (unsigned char *) s;
	while (*p)
	{
		if (*p == (unsigned char) c)
			last = count;
		p++;
		count++;
	}
	return (p - (count - last));
}
