/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: clmo <clmo@student.42nice.fr>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/17 21:02:17 by clmo             #+#    #+#              */
/*   Updated: 2026/10/21 19:42:33 by clmo            ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;
	size_t	total;

	total = nmemb * size;
	if (nmemb && total / nmemb != size)
		return (NULL);
	array = malloc(total);
	if (!array)
		return (NULL);
	ft_bzero(array, total);
	return (array);
}
