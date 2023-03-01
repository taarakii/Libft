/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:52:18 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/25 16:00:28 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

// start: The start index of the subsring in the string 's'
// len: The maximum length of the substring.
//@return_val
// The substring. NULL if the allocation fails.
//@discription
// Allocates (with malloc(3)) and returns a substring from the string 's'.
// The substring begins at index 'start' and is of maximum size 'len'.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	char	*temp;
	size_t	i;

	p = (char *)malloc(len * sizeof(char));
	temp = p;
	if (p == NULL)
		return (NULL);
	if (ft_strlen(s) < start)
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
