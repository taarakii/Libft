/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:26:17 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/20 15:35:06 by taaraki          ###   ########.fr       */
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
	t_list	*temp;
	t_list	*store;
	size_t	i = 0;

	printf("\n#%s#", __func__);
	store = lst;

	new = (t_list *)malloc(sizeof(t_list) + 1);
	if (new == NULL)
		return (NULL);
	//while (lst != NULL)
	printf("\nf:'%p'", f);
	printf("\ni:%zu, '%p':lst->c", i++, lst->content);
//
	if (lst->next == NULL)
		printf("\nnext is null");
	else
		printf("\nnext is not null");
	if (lst->content == NULL)
		printf("\ncontent is null");
	else
	{
		printf("\ncontent is not null");
		printf("\ncontent:'%s'", (char *)lst->content);
		lst->content = (*f)(lst->content);
		printf("\ncontent:'%s'", (char *)lst->content);
		if (lst->content != NULL)
		{
			(*del)(lst->content);
			lst->content = NULL;
		}
	}
//
	printf("\n#");
	while (lst->next != NULL)
	{
		//printf("\ni:%zu, '%p':lst->c", i++, lst->content);
		temp = lst;	
		lst = lst->next;
		//new = (*f)(temp->content);
		//(*del)(temp->content);
	}
	//return (new);
	return (store);
}
