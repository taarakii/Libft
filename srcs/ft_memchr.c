/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:54:25 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/15 11:56:57 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*p;	

	p = (char *)s;
	while (n > 0)
	{
		if ((unsigned char)*p == (unsigned char)c)
			return ((void *)p);
		p++;
		n--;
	}
	return (0);
}
