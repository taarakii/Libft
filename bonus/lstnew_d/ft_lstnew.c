/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 15:16:58 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/15 16:21:07 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include	"libft.h"

typedef struct	s_list
{
 void		*content;
 struct s_list	*next;
}		t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list)malloc(sizeof(t_list) + 1);
	if (content == NULL)
	{
		printf("is null");
		return (NULL);
	}
	new->content = content;	
	return (new);
}
