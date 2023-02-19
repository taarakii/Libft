/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 12:13:51 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/19 15:45:19 by taaraki          ###   ########.fr       */
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
	t_list	*temp2;

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

		//store the memory of the current address of a pointer.
		temp2 = *lst;

		//set the next pointer's address to the current address of a pointer.
		*lst = (*lst)->next;
		// I probably need to use 'del' to delete the content AND free the lst itself.
		(*del)(temp2->content);
		free(temp2);

		//do I need set the pointer to a null, besides freeing the pointer?
		//temp2 = NULL;
	}
	printf("after while i = %d\n", i);

	// while loop runs until the last element. (when the next element is null.)
	// That means the last element must be freed manually after the loop.
	if (i >= 1)
	{
		(*del)(*lst);
		free(*lst);
	}
	printf("#\n");

	// I definitely need to free a pointer to avoid unexpected behaviors.
	// freeing the double pointer at the end of the program.
	//(*del)(lst);
	//free(lst);
	//lst = NULL;
	printf("$\n");
	
	//setting the pointer to a NULL just in case (maybe it holds no sense.)
	//lst = NULL;
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
