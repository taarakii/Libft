#include	<stdio.h>

int	main(void)
{
	char s1[] = "This is a test.";
	char s2[] = "This is a test 42.";

	printf("s1:%p\n", s1);
	printf("s2:%p\n", s2);
	printf("diff:%ld\n", s1 - s2);
	if (s1 == s2)
	{
		printf("equal\n");
	}
	else if (s1 > s2)
	{
		printf("s1 is larger\n");
	}
	else
	{
		printf("s1 is smaller\n");
	}
	return (0);
}
