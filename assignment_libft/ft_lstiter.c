/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:31:14 by taaraki           #+#    #+#             */
/*   Updated: 2023/03/03 16:51:05 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

//@description
// Iterates the list 'lst' and applies the function 'f'
// on the content of each node.
void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst == NULL)
		return ;
	if (f == NULL)
		return ;
	while (lst != NULL)
	{
		(*f)((lst)->content);
		lst = lst->next;
	}
}
