#include	<stdio.h>
#include	<unistd.h>
#include	<stdlib.h>
//#include	"libft.h"

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
void	put_str(char *s);

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
	//char	*ary[array_size + 1];
	int	i;
	
	// I may have to allocate memory for the whole thing first.
	//mem = (char**)malloc(((len_max + 1) * array_size) * sizeof(char) + 8);
	mem = (char**)malloc(array_size * sizeof(char*) + 1);
	i = 0;
	while (i < array_size)// + 1)
	{
		mem[i] = (char*)malloc((len_max + 1));// * sizeof(char));
		i++;
	}
	/* not necessary
	mem = ary;
	i = 0;
	while (i < array_size + 1)
	{
		free(ary[i]);
		i++;
	}
	*/
	return (mem);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	char	**temp;
	char	*p;
	int	array_size;
	int	len_max;
	int	i;
	int	j;
	int	k;

	p = (char *)s;
	len_max = 0;
	array_size = 0;
	array_size = count_split(s, &len_max, c) + 1;//array_size = number of splits + 1

	// allocate memory
	new = secure_mem(array_size, len_max);
	// store the memory of new in temp to return
	temp = new;
	if (new == NULL)
	{
		printf("\nAllocation fails.");
		return (NULL);
	}
	printf("\nAllocation succeeds.");
	i = 0;
	k = 0;
	printf("\nlen_max:    %d", len_max);
	printf("\narray_size: %d", array_size);
	//printf("\ni: %d", i);
	while (i < array_size)
	{
		// CHECK //
		printf("\ni:%d", i);
		printf("\nk:%d", k);
		//This doesn't work because
		// *p is not equal to null, it's just a splitter like ','.
		if (*p == c || *p == '\0')//'\0')
		{
			i++;
			p++;
			continue ;
		}
		j = 0;
		while (*p && j < len_max + 1)
		{
			printf("\nj:%d p:%c", j, *p);
			if (*p == c)
			{
				printf("\n'p == c'");
				p++;
				break ;
			}
			new[k][j] = *p; 
			printf(" new[%d][%d]:%c", k, j, new[k][j]);
			p++;
			j++;
		}
		new[k][j] = '\0';
		// I am here @ Feb9 4:20PM
		//if it is a pointer, I'm supposed to increment the new right here
		// in that case, I would not need to icnrement i for the sake of 
		// assigning charcters. However, I might still need i in order to 
		printf("\nsize: %d", j);
		printf("\nnew[%d]:%s", k, new[k]);
		//
		i++;
		k++;
	}
	//null terminate the array
	while (k <= array_size)
		new[k++] = NULL;
	//new[array_size] = NULL;//array_size is the number of elements
	printf("\n===");
	// CHECK //
	//temp = new;
	while (*new)
	{
		printf("\n");
		//put_str(*new++);
		printf("%s", *new++);
	}
	if (*new == NULL)
		printf("\n'(null)'");
	printf("\n===");
	//
	return (temp);//return (new);
}

void	put_str(char *s)
{
	while (*s)
		write(1, s++, 1);
	if (*s == '\0')	
		printf("\\0");
	return ;
}
