#include	<stdio.h>
#include	<stdlib.h>

char	*test_split(void);
char	**test_split2(void);


void	print_str(char *s)
{
	int	i;

	printf("print_str:\n");
	i = 0;
	if (s == NULL)
		return ;
	else
		printf("s is not null.\n");

	// I am here @ Feb 5:00PM
	printf("*s:%c\n", *s); //segmentation fault occurs here.

	//printf("before while\n");

	while (s != NULL && *s)
	{
		printf("%d:%c\n", i++, *s++);
	}
	return ;
}

//print strings untill the pointer is NULL
void	print_strings(char **s_ary)
{
	int	i;

	printf("print_strings\n");
	i = 0;
	while (s_ary[i])//while (*s_ary)
	{
		printf("#####\n");
		printf("i:%d\n", i);
		if (s_ary[i] == NULL)
			break ;
		else
		{
			printf("%s\n", s_ary[i]);
			print_str(s_ary[i]);	
		}
		i++;//s_ary++;
	}
	if (s_ary[i] == NULL)
		printf("s_art is null when i = %d\n", i);
	return ;
}

int	main(void)
{
	//char	*s[] = "hello,world,42,tokyo";
	char	**new;

	new = test_split2();
	//for (int i = 0; i < 4; i++)
	//	printf("%s\n", new[i]);
	print_strings(new);
	//free(new);
	return (0);
}
