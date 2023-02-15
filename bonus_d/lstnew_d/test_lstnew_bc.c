/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 14:51:35 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/15 15:15:45 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include	"libft.h"
#include	<stdio.h>
#include	<stdlib.h>

typedef struct	s_list
{
 //void		*content;
 int		num;
 //struct s_list	*next;
}		t_list;

//t_list	*ft_lstnew(void *content)
t_list	*ft_lstnew(void)
{
	//t_list	list;	
	t_list	*list;	

	list = (t_list *)malloc(sizeof(t_list) + 1);
//	list.next = 	
	//list->num = 9;
	(*list).num = 9;
	if (list == NULL)
	{
		return (NULL);
	}
	return (list);
}

int	main(void)
{
	//t_list	l;
	t_list	*l;

	l = ft_lstnew();
	if (l == NULL)
	{
		printf("null\n");
		return (1);
	}
	printf("not null\n");
	//printf("l->num:%d\n", l->num);
	printf("(*l).num:%d\n", (*l).num);
	return (0);
}
