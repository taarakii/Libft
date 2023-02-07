/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:55:40 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/07 20:55:40 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*p1;
	char	*p2;

	p1 = (char*)s1;
	p2 = (char*)s2;
	while (n > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		n--;
	}
	if (n != 0)
		return (*p1 - *p2);
	return (0);
}
