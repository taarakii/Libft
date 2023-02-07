/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:59:44 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/07 20:59:44 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<stdlib.h>
#include	"libft.h"

//@param
// s: The string to be split.
// c: The delimiter character.
//@return_val
// The array of new strings resulting from the split.
// NULL if the allocation fails.
//@description
// Allocates (with malloc(3)) and returns an array
// of strings obtained by splitting 's' using the
// character 'c' as a delimiter. The array must end
// with a NULL pointer.

int	count_split(const char *s, int *len_max, char c)
{
	char	*p;
	int	i_split;
	int	len;

	p = (char *)s;
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


char	**ft_split(char const *s, char c)
{
	char	**new;
	char	*p;
	int	array_size;
	int	len_max;
	int	i;
	int	j;

	p = (char *)s;
	printf("\np:'%s'", p);
	printf("\nc:'%c'", c);
	len_max = 0;
	array_size = 0;
	array_size = count_split(s, &len_max, c) + 1;

	new = (char**)malloc((array_size * (len_max + 1)) * sizeof(char) + 8);
	if (new == NULL)
	{
		printf("\nAllocation fails with size %d.", (array_size * len_max) + 1);
		return (NULL);
	}
	printf("\nAllocation succeeds with size %d.", (array_size * len_max) + 1);
	/* */
	printf("\nlen_max:    %d", len_max);
	printf("\narray_size: %d", array_size);
	i = 0;
	printf("\ni: %d", i);
	if (i < array_size)//while (i < array_size)
	{
		/* CHECK */
		printf("\n#");
		j = 0;
		while (*p && j < len_max)// != c)
		{
			if (*p == c)
				break;
			new[i][j] = *p;
			j++;
			p++;
		}
		// I am here @ Feb5 0535PM
		//p++;
		if (j > len_max)
			new[i][len_max] = '\0';
		else
			new[i][j] = '\0';
		/*
		*/
		i++;
	}
	else
	{
		/* CHECK */
		printf("\n$");
	}
	//null terminate the array
	new[array_size - 1] = NULL;
	return (new);
}
