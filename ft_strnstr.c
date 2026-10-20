/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: clmo <clmo@student.42nice.fr>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/17 21:03:50 by clmo             #+#    #+#              */
/*   Updated: 2026/10/18 21:40:51 by clmo            ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	unsigned char	*big;
	unsigned char	*little;
	size_t			count;

	count = 1;
	if (*little == 0)
		return (big);
	while (n-- && *big)
	{
		while (*big == *little)
		{
			if (count == ft_strlen(little))
				return (little - count);
			count++;
			little++;
		}
		little = little - count;
		count = 1;
	}
	return (NULL);
}
