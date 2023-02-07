/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:56:08 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/07 20:56:10 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"libft.h"

int	trimmed(char const *h, char c)
{
	char 	*p;

	p = (char *)h;
	while (*p)
	{
		if (*p == c)
			return (1);
		p++;
	}
	return (0);
}

int	count_begin(char const *h, char const *n)
{
	char 	*p;
	int	i_begin;

	p = (char *)h;
	i_begin = 0;
	while (*p)
	{
		if (trimmed(n, *p))
			i_begin++;	
		else
			break ;
		p++;
	}
	return (i_begin);
}

int	count_end(char const *h, char const *n)
{
	char 	*p;
	int	i_end;

	p = (char *)h;
	p = &p[ft_strlen(p) - 1];
	i_end = 0;
	while (*p)
	{
		if (trimmed(n, *p))
			i_end++;	
		else
			break ;
		p--;
	}
	return (i_end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new;
	int	i_begin;
	int	i_end;
	int	len_new;
	int	i;

	i_begin = 0;
	i_end = 0;
	len_new = 0;
	i_begin = count_begin(s1, set);
	i_end = count_end(s1, set);
	len_new = ft_strlen(s1) - i_begin - i_end;
	new =(char*)malloc(len_new * sizeof(char) + 1);
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < len_new)
		new[i++] = s1[i_begin++];
	return (new);
}
