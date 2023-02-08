#include	<stdlib.h>
#include	<stdio.h>

char	*test_split(void)
{
	char	*p;
	char	*new;

	new = (char*)malloc(5 * sizeof(char) + 1);	
	p = new;
	for (int i = 0; i < 5 - 1; i++)
		*new++ = 'c';
	*new = '\0';
	return (p);
}

char	**test_split2(void)
{
	char	**new;
	int	array_size;
	int	len_max;
	int	j;
	
	array_size = 4;
	len_max = 5;

	//new = (char**)malloc((len_max + 1) * array_size * sizeof(char) + 1);
	new = (char**)malloc(array_size * sizeof(char*) + 1);
	for (int i = 0; i < array_size; i++)
		new[i] = (char*)malloc(len_max + 1);
	for (int i = 0; i < array_size; i++)
	{
		for (j = 0; j < len_max; j++)
			new[i][j] = 'c';
		new[i][j] = '\0';
		//new[i][j] = 'B';
	}
	new[1][0] = 'A';
	//new[array_size] = NULL;
	new[4] = NULL;
	return (new);
}
