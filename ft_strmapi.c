/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strmapi.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: clmo <clmo@student.42nice.fr>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/17 21:03:40 by clmo             #+#    #+#              */
/*   Updated: 2026/10/17 21:03:42 by clmo            ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		len_s;

	len_s = ft_strlen(s);
	str = malloc((sizeof(char) * len_s + 1));
	if (str == 0)
		return (NULL);
	str[len_s] = '\0';
	while (len_s--)
	{
		str[len_s] = (*f)(len_s, s[len_s]);
	}
	return (str);
}
