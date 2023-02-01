#include	<stdio.h>
#include	<stdlib.h>

int	ft_atoi(const char *str);

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("%d\n", atoi(argv[1]));
		printf("%d\n", ft_atoi(argv[1]));
		//printf("%llu\n", 18446744073709551614);
		//printf("%llu\n", -18446744073709551614);
	}
	else
		printf("wrong argument format\n");
	return (0);
}
