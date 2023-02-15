/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:53:52 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/15 12:00:27 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

//@param:
// s1: The prefix string.
// s2: The suffix string.
//@return_val
// The new string.
// NULL if the allocatino fails.
//@description
// Allocates (with malloc(3)) and returns a new stirng,
// which is the result of the concatenation of 's1' and 's2'.
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	char	*temp;

	p = (char *)malloc((ft_strlen(s1) + ft_strlen(s2)) * sizeof(char) + 1);
	if (p == NULL)
		return (NULL);
	temp = p;
	while (*s1)
		*(p++) = *(char *)(s1++);
	while (*s2)
		*(p++) = *(char *)(s2++);
	*p = '\0';
	return (temp);
}
