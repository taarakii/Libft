/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:26:17 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/23 15:06:58 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	"libft.h"

//@description
// Iterates the list 'lst' and applies the function 'f' on the content
// of each node. Creates a new list resulting of the successive
// applications of the function 'f'. The 'del' funciton is used to delete
// the content of a node if needed.
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*store;

	(*del)((int *)malloc(sizeof(int) + 1));
	new = (t_list *)malloc(sizeof(t_list) + 1);
	if (new == NULL)
		return (NULL);
	store = new;
	while (lst != NULL)
	{
		new->content = (*f)(lst->content);
		if (lst->next == NULL)
		{
			new->next = NULL;
			break ;
		}
		new->next = (t_list *)malloc(sizeof(t_list) + 1);
		if (new->next == NULL)
			return (NULL);
		new = new->next;
		lst = lst->next;
	}
	return (store);
}
