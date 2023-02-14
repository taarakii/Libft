/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:40:45 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/14 16:51:46 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdlib.h>
#include	"libft.h"

int	count_split(const char *s, int *len_max, char c)
{
	char	*p;
	int		i_split;
	int		len;

//
//	if (s == NULL)
//		return (0);
//
	p = (char *)s;
	*len_max = 0;
	len = 0;
	i_split = 0;
	while (*p)
	{	
		printf("\n*p:%c", *p);
		if (*p == c)
		{
			i_split++;
			printf("\ni_split:%d", i_split);
			len = 0;
		}
		else
		{
			len++;
		}
		if (*len_max < len)
			*len_max = len;
		p++;
	}
	return (i_split);
}

char	**secure_mem(int array_size, int len_max)
{
	char	**mem;
	int		i;

	mem = (char **)malloc(array_size * sizeof(char *) + 1);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < array_size)
	{
		mem[i] = (char *)malloc((len_max + 1) * sizeof(char));
		i++;
	}
	return (mem);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	int		array_size;
	int		len_max;
	int		j;
	int		k;

	//if (s == NULL)
	//	return (NULL);
	array_size = count_split(s, &len_max, c) + 1;
	new = secure_mem(array_size, len_max);
	k = 0;
	while (array_size)
	{
		if (*s == c || *s == '\0')
		{
			array_size--;
			s++;
			continue ;
		}
		j = 0;
		while (*s != c && *s)// && j < len_max + 1)
			new[k][j++] = *s++;
	//	if (*s == c)
			s++;
		new[k++][j] = '\0';
		array_size--;
	}
	new[k] = NULL;
	return (new);
}
