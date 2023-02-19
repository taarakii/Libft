/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:13:51 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/19 16:03:43 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
#include	<stdio.h>
#include	<stdlib.h>

/*
typedef struct	s_list
{
 void		*content;
 struct s_list	*next;
}		t_list;
*/

void	ft_del(void *p)
{
	free(p);
}


//I think, I'm not freeing the pointer correctly.
//@param
// lst: The address of a pointer to a node.
// del: The address of the function used to delete the 'content' of the node.

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	**p;
	t_list	*temp;

	p = lst;
	// The first two conditions are necessary.
	if (lst == NULL)
		return ;
	if (*lst == NULL)
		return ;

	// while loop runs until the last element. (when the next element is null.)
	int i = 0;
	while ((*lst)->next != NULL)
	{
		printf("i:%d\n", i++);

		temp = *lst;//store the memory of the current address of a pointer.
		*lst = (*lst)->next;//set the next pointer's address to the current address of a pointer.
		(*del)(temp->content);// I probably need to use 'del' to delete the content AND free the lst itself.
		free(temp);
	}
	printf("after while i = %d\n", i);

	// freeing the last element after the while loop.
	if (i >= 1)
	{
		(*del)((*lst)->content);
		free(*lst);
	}
	printf("#\n");

	// I definitely need to free a pointer to avoid unexpected behaviors.
	// freeing the double pointer at the end of the program.
	// The question is, do I need to free the double pointer?

	//free(lst);//comment this line out, so that the tester runs without crashing.
	//free(*p);
	//lst = NULL;
	*p = NULL;
	p = NULL;
	printf("$\n");
}

/*
int	main(void)
{
	void	(*fp)(void *);
	t_list	**lst;
	t_list	*elem1;
	t_list	*elem2;
	t_list	*elem3;
	
	lst = (t_list **)malloc(sizeof(t_list) + 1);
	elem1 = (t_list *)malloc(sizeof(t_list) + 1);
	elem2 = (t_list *)malloc(sizeof(t_list) + 1);
	elem3 = (t_list *)malloc(sizeof(t_list) + 1);

	elem1->next = elem2;
	elem2->next = elem3;
	elem3->next = NULL;
	*lst = elem1;

	ft_lstclear(lst, fp);
	return (0);
}
*/
