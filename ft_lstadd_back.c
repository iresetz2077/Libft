/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_lstadd_back.c                                  :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: clmo <clmo@student.42nice.fr>             #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/09 12:42:49 by clmo             #+#    #+#              */
/*   Updated: 2026/11/09 12:42:52 by clmo            ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*node;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	node = ft_lstlast(*lst);
	node->next = new;
}
