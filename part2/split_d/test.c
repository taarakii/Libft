#include	<stdio.h>

char	**ft_split(char const *s, char c);

// The problem is actually when I pass the result from ft_split.c
// Splitting strings is a success, but when I pass the arguments
// There' is non returned. (Feb6 0358PM)

int	main(void)
{
	char	s[] = "hello,world,42,tokyo";
        //char	*s[] = {"hello","world","42","tokyo", NULL};
	char	**new;
	int	i;

	new = ft_split(s, ',');
	printf("\nprinting the variable...");
	i = 0;
	while (*new)
		printf("\ni:%d '%s'", i++, *new++);
	if (*new == NULL)
		printf("\nis null.");
	return (0);
}
