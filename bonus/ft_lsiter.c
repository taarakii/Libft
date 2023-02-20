/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsiter.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 16:31:14 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/19 16:36:05 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include	<stdio.h>
//#include	<stdlib.h>
#include	"libft.h"

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
