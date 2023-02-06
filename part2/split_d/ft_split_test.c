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

char	**secure_mem(int array_size, int len_max)
{
	char	**mem;
	char	*ary[array_size];
	int	i;
	
	i = 0;
	while (i < array_size + 1)
	{
		ary[i] = (char*)malloc((len_max + 1) * sizeof(char));
		i++;
	}
	mem = ary;
	return (mem);
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

	// need CHECK //
	// the way to allocate a new memory as an array of strings
	//char	ary[array_size];
	//for (int i = 0; i < array_size; i++)
	//	ary[i] = (char*)malloc((len_max + 1) * sizeof(char) + 8);
	new = secure_mem(array_size, len_max);
	//new = (char**)malloc((array_size * (len_max + 1)) * sizeof(char) + 8);
	if (new == NULL)
	{
		printf("\nAllocation fails with size %d.", (array_size * len_max) + 1);
		return (NULL);
	}
	printf("\nAllocation succeeds with size %d.", (array_size * len_max) + 1);
	/* */
	i = 0;
	//printf("\nlen_max:    %d", len_max);
	//printf("\narray_size: %d", array_size);
	//printf("\ni: %d", i);
	while (i < array_size)
	{
		// CHECK //
		printf("\ni:%d", i);
		j = 0;
		while (*p && j < len_max + 1)
		{
			printf("\nj:%d p:%c c:%c", j, *p, c);
			if (*p == c)
			{
				printf("\n'p == c'");
				p++;
				break;
			}
			//new[0][0] = *p;// new[i][j] = *p; 
			new[i][j] = *p; 
			printf("\nnew[%d][%d]:%c", i, j, new[i][j]);
			p++;
			j++;
		}
		new[i][j] = '\0';

		/*
		while (*p && j < len_max)// != c)
		{
			if (*p == c)
				break;
			new[i][j] = *p;
			// CHECK //
			printf("i:%d j:%d p:'%c'", i, j, *p);
			j++;
			p++;
		}
		// I am here @ Feb5 0535PM
		//p++;
		if (j > len_max)
			new[i][len_max] = '\0';
		else
			new[i][j] = '\0';
		*/
		i++;
	}
	//null terminate the array
	new[array_size - 1] = NULL;
	return (NULL);//return (new);
}
