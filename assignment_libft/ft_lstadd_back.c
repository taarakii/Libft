/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/16 17:46:48 by taaraki           #+#    #+#             */
/*   Updated: 2023/03/03 16:50:26 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

// 1. if the new is null, return.
// 2. if *lst is null, set new to the *lst (first element) and return.
// 3. otherwise, use i as an index to access the last element, 
//    and set new to the last element.
void	ft_lstadd_back(t_list **lst, t_list *new)
{
	size_t	i;

	if (new == NULL)
	{
		return ;
	}
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	i = 0;
	while ((*lst + i)->next != NULL)
		i++;
	(*lst + i)->next = new;
}
