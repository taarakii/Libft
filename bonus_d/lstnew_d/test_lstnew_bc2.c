/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew_bc2.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:51:35 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/15 15:47:26 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include	"libft.h"
#include	<stdio.h>
#include	<stdlib.h>

typedef struct	s_list
{
 void		*content;
 struct s_list	*next;
//
 int		num;
}		t_list;

//t_list	*ft_lstnew(void)
//t_list	*ft_lstnew(void *content)
t_list	*ft_lstnew(struct s_list *prev)
{
	t_list	*list;	

	list = (t_list *)malloc(sizeof(t_list) + 1);
	prev->next = list;
//
	list->num = 9;
	//(*list).num = 9;
//
	if (list == NULL)
	{
		return (NULL);
	}
	return (list);
}

int	main(void)
{
	t_list	*node;
	t_list	*new_n;

	node->next = NULL;
	node->num = 3;
	new_n = ft_lstnew(node);
	if (new_n == NULL)
	{
		printf("null\n");
		return (1);
	}
	printf("not null\n");
	printf("node->num:%d\n", node->num);
	printf("new_n->num:%d\n", new_n->num);
	//printf("(*l).num:%d\n", (*l).num);
	return (0);
}
