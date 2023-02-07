/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:52:51 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/07 20:52:52 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*p;

	p = dst;
	if (dst > src)
	{
		while (len > 0)
		{
			*(char*)(dst + len - 1) = *(char*)(src + len - 1);
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*(char*)dst++ = *(char*)src++;
			len--;
		}
	}
	return (p);
}
