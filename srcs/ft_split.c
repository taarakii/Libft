#include	<stdio.h>
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
		if (len_max < len)
			len_max = len;
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
	len_max = 0;
	array_size = 0;
	array_size = count_split(s, &len_max, c) + 1;

	new = (char**)malloc((array_size * (len_max + 1)) * sizeof(char) + 1);
	if (new == NULL)
	{
		printf("\nAllocation fails with size %d.", (array_size * len_max) + 1);
		return (NULL);
	}
	printf("\nAllocation succeeds with size %d.", (array_size * len_max) + 1);
	i = 0;
	while (i < array_size)
	{
		j = 0;
		while (*p != c)
		{
			new[i][j] = *p;
			j++;
			p++;
		}
		if (*p == c)
			p++;
		new[i][j + 1] = '\0';
		i++;
	}
	return (p);
}
