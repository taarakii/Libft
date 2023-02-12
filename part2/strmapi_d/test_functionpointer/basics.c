#include	<stdio.h>

int	plus_one(int a)
{
	return (a + 1);
}

int	main(void)
{
	int	a;
	int	(*fp)(int);
	
	a = 1;
	printf("a:        %p\n", &a);
	printf("fp:       %p\n", fp);
	printf("plus_one: %p\n", plus_one);
	fp = plus_one;
	printf("a: %d\n", a);
	printf("a: %d\n", plus_one(a));
	printf("a: %d\n", (*fp)(a));
	return (0);
}
