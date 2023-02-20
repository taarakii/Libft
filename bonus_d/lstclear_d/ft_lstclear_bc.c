/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:13:51 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/20 12:10:43 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<stdlib.h>

void	ft_del(void *p)
{
	free(p);
}

//I think, I'm not freeing the pointer correctly.
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

	// while loop runs until the last element. (when the next element is null.)
	while ((*lst)->next != NULL)
	{
		temp = *lst;//store the memory of the current address of a pointer.
		*lst = (*lst)->next;//set the next pointer's address to the current address of a pointer.
		(*del)(temp->content);// I probably need to use 'del' to delete the content AND free the lst itself.
		free(temp);
	}
	// freeing the last element after the while loop. (if the loop is not run, free the first element)
	(*del)((*lst)->content);
	free(*lst);

	*store = NULL;//setting the pointer to the first element null
	store = NULL;//setting the double pointer that holds the address of the first pointer null (unnecessary)
}
