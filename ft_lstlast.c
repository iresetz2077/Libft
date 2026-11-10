/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstlast.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: clmo <clmo@student.42nice.fr>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/09 12:42:29 by clmo             #+#    #+#              */
/*   Updated: 2026/11/09 12:42:31 by clmo            ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	unsigned int	last;

	if (lst == NULL)
		return(NULL);
	last = ft_lstsize(lst) - 1;
	while (last--)
		lst = lst->next;
	return (lst);
}
