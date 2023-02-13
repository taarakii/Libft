#include	<stdlib.h>
#include	<stdio.h>


int	main(void)
{
	char	*s;

	s = (char *)malloc((size_t)1000000000000000);
	if (s == NULL)
		printf("(null)\n");
	return (0);
}
