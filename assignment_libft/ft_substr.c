/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:52:18 by taaraki           #+#    #+#             */
/*   Updated: 2023/03/03 17:12:05 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*temp;
	size_t	i;

	p = (char *)malloc(len * sizeof(char));
	temp = p;
	if (p == NULL)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
		return ("");
	s += (start) * sizeof(char);
	i = 0;
	while (i < len)
	{
		*p = *(char *)s;
		p++;
		s++;
		i++;
	}
	return (temp);
}
