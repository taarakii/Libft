/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:46:48 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/16 17:54:48 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (new == NULL)
		return ;
	if (lst == NULL)
		return ;
	if (*lst == NULL)
	{
		//(*lst)->next = new;
		return ;
	}
	//increment the pointer until the last element
	if ((*lst)->next != NULL)
	{
		*lst = (*lst)->next;
	}
	//add the new pointer
	(*lst)->next = new;
}
