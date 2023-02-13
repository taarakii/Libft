/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 16:34:49 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/13 17:19:05 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;
	size_t	i;

	// find an overflow
	if (!(count == 0 || size == 0))
	{
		if (count * size < count || count * size < size)
			return (NULL);
	}
	p = (char *)malloc(count * size);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < count)
	{
		p[i] = 0;
		i++;
	}	
	return (p);
}
