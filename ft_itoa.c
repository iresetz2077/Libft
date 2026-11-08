/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: clmo <clmo@student.42nice.fr>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/17 21:02:28 by clmo             #+#    #+#              */
/*   Updated: 2026/10/17 21:02:30 by clmo            ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_nbrlen(int n)
{
	int		len;
	long	nbr;

	nbr = (long) n;
	len = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		len++;
	}
	while (nbr > 9)
	{
		nbr = nbr / 10;
		len++;
	}
	len++;
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len_n;
	long	nbr;

	nbr = (long) n;
	if (nbr < 0)
		nbr = nbr * -1;
	len_n = ft_nbrlen(n);
	res = malloc(sizeof(char) * (len_n + 1));
	if (res == 0)
		return (NULL);
	res[len_n] = '\0';
	len_n--;
	while (len_n > 0)
	{
		res[len_n] = (nbr % 10) + '0';
		nbr = nbr / 10;
		len_n--;
	}
	if (n < 0)
		res[0] = '-';
	else
		res[0] = (nbr % 10) + '0';
	return (res);
}
