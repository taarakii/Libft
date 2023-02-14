/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:54:25 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/14 15:25:04 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

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
