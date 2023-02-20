/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsiter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:31:14 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/19 16:40:00 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdlib.h>
//#include	"libft.h"

typedef struct	s_list
{
 void		*content;
 struct s_list	*next;
}		t_list;

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	//t_list	*temp;

	if (lst == NULL)
		return ;
	if (f == NULL)
		return ;

	while (lst->next != NULL)
	{
		(*f)(lst);
		//temp = lst;
		lst = lst->next;
		//(*f)(temp);
	}
	(*f)(lst);
}

int	main(void)
{
	t_list  *lst = ft_lstnew(strdup("Hello"));
	ft_lstadd_back(&lst, ft_lstnew(strdup(" World")));
	return (0);
}
