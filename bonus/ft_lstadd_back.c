/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:46:48 by taaraki           #+#    #+#             */
/*   Updated: 2023/03/06 17:20:17 by taaraki          ###   ########.fr       */
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

//@procedure
// 1. if the new is null, return.
// 2. if *lst is null, set new to the *lst (first element) and return.
// 3. otherwise, use i as an index to access the last element, 
//    and set new to the last element.

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	//size_t	i;
	t_list *temp = *lst;

	if (new == NULL)
	{
		return ;
	}
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	//i = 0;
	//while ((*lst + i)->next != NULL)
	while (temp->next != NULL)
	{
		temp = temp->next;
	//	i++;
	}
	//(*lst + i)->next = new;
	temp->next = new;
}
