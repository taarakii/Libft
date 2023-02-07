#include	<stdio.h>
#include	<stdlib.h>
#include	<unistd.h>

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

	while (s != NULL && *s)
	{
		printf("%d:%c\n", i++, *s++);
		//write(1, *s++, 1);
	}
	return ;
}

//print strings untill the pointer is NULL
void	print_strings(char **s_ary)
{
	int	j;

	printf("print_strings\n");
	j = 0;
	while (*s_ary)
	{
		printf("j:%d\n", j++);
		if (*s_ary == NULL)
			return ;
		//write(1, "\n", 1);
		printf("#\n");
		print_str(*s_ary);	
		s_ary++;
	}
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
	free(new);
	return (0);
}
