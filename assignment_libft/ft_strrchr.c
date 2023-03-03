/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:55:24 by taaraki           #+#    #+#             */
/*   Updated: 2023/03/03 17:09:31 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		flag;

	p = (char *)s;
	flag = 0;
	while (*s)
	{
		if (*s == (char)c)
		{
			p = (char *)s;
			flag = 1;
		}
		s++;
	}
	if (*s == (char)c)
		return ((char *)s);
	if (flag == 1)
		return (p);
	return (0);
}
