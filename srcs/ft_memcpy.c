/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:51:51 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/14 15:25:47 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	char	*p1;
	char	*p2;

	p1 = (char *)dst;
	p2 = (char *)src;
	while (n > 0)
	{
		*p1 = *p2;
		p1++;
		p2++;
		n--;
	}
	return (dst);
}
