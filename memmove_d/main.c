#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len);

int	main(int argc, char *argv[])
{
	char	s1[] = "This is a test 42.";
	char	s2[] = "0123456789";
	char	*p;

	if (argc == 2)
	{
		printf("s1: %s\n", s1);	
		printf("s2: %s\n", s2);	
		p =  memmove(s1, s2, atoi(argv[1]));
		printf("==\n");
		printf("s1: %s\n", s1);	
		printf("s2: %s\n", s2);	
		printf("p : %s\n", p);	
	}
	else
		printf("wrong argument format\n");
	return (0);
}

