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

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t			i;
	size_t			j;

	i = 0;
	j = 0;
	if (little[j] == 0)
		return ((char *) big);
	while (big[i] && i < n)
	{
		while (i + j < n && big[i + j] == little[j])
		{
			j++;
			if (little[j] == 0)
				return ((char *) &big[i]);
		}
		i++;
		j = 0;
	}
	return (NULL);
}
