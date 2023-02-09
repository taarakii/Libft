#include	<stdio.h>
#include	<unistd.h>
#include	<stdlib.h>
#include	"libft.h"

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
	int	i;
	
	mem = (char**)malloc(array_size * sizeof(char*) + 1);
	i = 0;
	while (i < array_size)
	{
		mem[i] = (char*)malloc((len_max + 1) * sizeof(char));
		i++;
	}
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
	array_size = count_split(s, &len_max, c) + 1;

	new = secure_mem(array_size, len_max);
	temp = new;
	i = 0;
	k = 0;
	while (i < array_size)
	{
		if (*p == c || *p == '\0')
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
		i++;
		k++;
	}
	while (k <= array_size)
		new[k++] = NULL;
	return (temp);
}
