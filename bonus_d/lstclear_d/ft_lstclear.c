/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:13:51 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/19 16:26:38 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_del(void *p)
{
	free(p);
}

//@param
// lst: The address of a pointer to a node.
// del: The address of the function used to delete the 'content' of the node.

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	**store;
	t_list	*temp;

	store = lst;
	if (lst == NULL)
		return ;
	if (*lst == NULL)
		return ;
	while ((*lst)->next != NULL)
	{
		temp = *lst;
		*lst = (*lst)->next;
		(*del)(temp->content);
		free(temp);
	}
	(*del)((*lst)->content);
	free(*lst);
	*store = NULL;
	store = NULL;
}
