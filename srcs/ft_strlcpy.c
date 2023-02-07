/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:55:49 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/07 20:55:50 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stddef.h>

int	ft_strlen(const char * s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize)
{
	char	*p1;
	char	*p2;
	int	len;

	len = ft_strlen(src);
	p1 = (char*) dst;
	p2 = (char*) src;

	if (dstsize <= 0)
		return (len);
	while (dstsize > 1)
	{
		*p1 = *p2;
		p1++;
		p2++;
		dstsize--;
	}
	*p1 = '\0';
	return (len);
}
