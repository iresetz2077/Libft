/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   test.c                                            :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: clmo <clmo@student.42nice.fr>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/06 16:18:08 by clmo             #+#    #+#              */
/*   Updated: 2026/11/06 16:18:08 by clmo            ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_countstrings(unsigned char *str, int c)
{
	size_t	count;
	size_t	i;

	while (str[i])
	{
		if (str[i] == (unsigned char) c && str[i-1] != c)
			count++;
		i++;
	}
	if (str[i-1] != c)
		count++;
	return(count);
}

int	main(void)
{
	unsigned char	str[100] = "aaabaaabaaabaaab";
	int				c = 'b';

	printf("%zu", ft_countstrings(str, c));
}