/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 17:19:41 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/19 12:00:30 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

//@param
// lst: The node to free.
// del: The address of the function used to delete the content.
//@description
// Takes, as a parameter, a node and frees the memory of the node's content
// using the function 'del' given as a parameter and free the node.
// The memory of 'next' must not be freed.

// The question is whether to free the memory of the content or the list itself.
// It says "frees the memory of the node's content" so I guess at least I have to free the content.
// So, in short, I should free the content, but not the next.

void	ft_del(void *p)
{
	free(p);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst == NULL)
		return ;
	if (lst->content == NULL)
		return ;
	(*del)(lst->content);
}
