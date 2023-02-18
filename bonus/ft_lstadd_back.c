/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:46:48 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/18 17:08:30 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	"libft.h"

//@param
// lst: The address of a pointer to the first link of a list.
// new: The address of a pointer to the node to be added to the list.
//@return_val
// None
//@description
// Adds the node 'new' at the end of the list.

void	ft_lstadd_back(t_list **lst, t_list *new)
{

	if (new == NULL)
	{
		return ;
	}
	//if (lst == NULL) #lst is supposed to be null at first
	//	return ;
	if (*lst == NULL)
	{
		printf("\n*lst is null");
		*lst = new;
		return ;
	}

	//increment the pointer until the last element
	int i = 0;
	//while ((*lst)->next != NULL)
	while ((*lst + i)->next != NULL)
	{
		printf("\ni:%d ", i);
		//*lst = (*lst)->next;
		i++;
	}

	//add the new pointer
	//(*lst)->next = new;
	(*lst + i)->next = new;

	//checking the previous list (Feb18 5:05PM)
	//printf("\n%s ", (char *)((*lst - 1)->content));//this way of accessing a list with a pointer is possible
	printf("\n%s ", (char *)((*lst)->content));
	if (((*lst)->next) != NULL)
		printf("\nnext is not null");
	printf("\n%s ", (char *)((*lst)->next->content));
	//set NULL at the last element after adding the pointer
	//(*lst + 1)->next = NULL;
}
