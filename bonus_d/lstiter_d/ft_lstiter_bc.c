/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:31:14 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/20 11:01:55 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>
#include	"libft.h"

/*
typedef struct	s_list
{
 void		*content;
 struct s_list	*next;
}		t_list;
*/

//@description
// Iterates the list 'lst' and applies the function 'f'
// on the content of each node.

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	size_t	i;

	if (lst == NULL)
		return ;
	if (f == NULL)
	{
		printf("\nf is null.");
		return ;
	}
/*
	if (*f == NULL)
	{
		printf("\n*f is null.");
		return ;
	}
*/
	i = 0;
	//while ((lst + i) != NULL)
	while (lst->next != NULL)
	{
		printf("i:%zu ", i);
		printf("%s ", (char *)(lst)->content);
		(*f)((lst)->content);
		printf("%s ", (char *)(lst)->content);
		//(*f)((lst + i)->content);
		lst = lst->next;
		if (lst->next == NULL)
			printf("\n next is null.");
		i++;
	}
	//(*f)(lst->content);
}
