/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 17:04:50 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/15 17:35:02 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
/*
typedef struct	s_list
{
 void		*content;
 struct s_list	*next;
}		t_list;
*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	//t_list	**temp;
	t_list	*temp;

	if (new == NULL)
		return ;
	//temp = lst;
	temp = *lst;
	//I think this right here is correct.
	*lst = new;
	//(*lst)->next = *temp;
	(*lst)->next = temp;
	//lst++;
	//lst = temp;
}
