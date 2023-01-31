#include <stdio.h>
#include <string.h>
#include <stdlib.h>
	
int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(int argc, char *argv[])
{
	char str[] = "this is a test 42.";//\n and a new line.";
	int val;

	if (argc == 3)
	{
		val = ft_strncmp(str, argv[1], atoi(argv[2]));
		printf("%d\n", val);
	}
	else
		printf("too few arguments\n");
	return (0);
}
