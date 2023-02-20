/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/20 12:26:17 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/20 16:37:55 by taaraki          ###   ########.fr       */
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
	int	*p_int;
	int	i;

	printf("\n#%s#", __func__);

	p_int = (int *)malloc(sizeof(int) + 1);
	if (p_int != NULL)
		(*del)(p_int);
	new = (t_list *)malloc(sizeof(t_list) + 1);
	if (new == NULL)
		return (NULL);
	store = new;

	//while (lst != NULL)
	i = 0;
	while (lst->next != NULL)
	{
		if (i >= 1)
			prev->next = new;
		if (lst->content != NULL)
		{
			new->content = (*f)(lst->content);
			//(*del)(temp->content);
			//temp->content = NULL;
		}
		prev = new;
		new++;
		i++;
		lst = lst->next;
	}

	//return (new);
	return (store);
}
