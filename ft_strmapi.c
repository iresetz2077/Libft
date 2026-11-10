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
	char			*str;
	size_t			len_s;
	unsigned int	i;

	i = 0;
	if (!s || !f)
		return (NULL);
	len_s = ft_strlen(s);
	str = malloc(sizeof(char) * (len_s + 1));
	if (!str)
		return (NULL);
	while (i < len_s)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
