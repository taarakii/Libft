/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:52:18 by taaraki           #+#    #+#             */
/*   Updated: 2023/03/10 14:03:37 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*temp;
	//size_t	i;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) < (size_t)start)
		return (ft_strdup(""));
	s += start * sizeof(char);
	p = (char *)malloc(sizeof(char) * (len + 1));//don't I need to add 1?
	if (p == NULL)
		return (NULL);
	temp = p;
	//if ((unsigned int)ft_strlen(s) < start)
	//i = 0;
	//while (i < len)
	while (len)
	{
		*p++ = *(char *)s++;
	//	i++;
		len--;
	}
	*p = '\0';
	return (temp);
}
