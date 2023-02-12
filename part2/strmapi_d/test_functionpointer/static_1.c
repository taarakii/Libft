#include	<stdio.h>

//1. static variables are defined to be 0 if not explicitly defined.
//2. static variables go over the scope of functions
static int	count;

int	count_times(void)
{
	//static int	count;

	count++;
	return (count);
}

int	main(void)
{
	printf("%d ", count_times());
	printf("%d ", count_times());
	return (0);
}
