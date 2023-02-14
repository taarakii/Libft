/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:40:45 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/14 15:43:13 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"libft.h"

int	count_split(const char *s, int *len_max, char c)
{
	char	*p;
	int		i_split;
	int		len;

	p = (char *)s;
	*len_max = 0;
	len = 0;
	i_split = 0;
	while (*p)
	{	
		if (*p == c)
		{
			i_split++;
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
	int		i;
	int		j;
	int		k;

	array_size = count_split(s, &len_max, c) + 1;
	new = secure_mem(array_size, len_max);
	i = 0;
	k = 0;
	while (i < array_size)
	{
		if (*s == c || *s == '\0')
		{
			i++;
			s++;
			continue ;
		}
		j = 0;
		while (*s != c && *s && j < len_max + 1)
			new[k][j++] = *s++;
		if (*s == c)
			s++;
		new[k++][j] = '\0';
		i++;
	}
	while (k <= array_size)
		new[k++] = NULL;
	return (new);
}
