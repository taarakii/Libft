/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:55:49 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/15 12:01:13 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	char	*p1;
	char	*p2;
	int		len;

	len = ft_strlen(src);
	p1 = (char *) dst;
	p2 = (char *) src;
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
