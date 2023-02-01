#include	<stdio.h>
#include	<string.h>
#include	<stdlib.h>
#include	<stddef.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int	main(int argc, char * argv[])
{
	//char	s[] = "This is a test string 42.";
	char	s[] = "";
	char	*p;

	if (argc == 3)
	{
		printf("s: %s\n", s);
		printf("===\n");
		p = strnstr(s, argv[1], atoi(argv[2]));
		printf("s: %s\n", s);
		printf("p: %s\n", p);
	}
	else
		printf("wrong argument format\n");
	return (0);
}
