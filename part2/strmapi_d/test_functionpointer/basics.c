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
	// printing the address of variables
	printf("a:        %p\n", &a);
	printf("fp:       %p\n", fp); // function pointer has an address
	printf("plus_one: %p\n", plus_one); // function also has an address
	fp = plus_one;
	printf("a: %d\n", a);
	printf("a: %d\n", plus_one(a));
	// use function pointer like a function
	// by putting an asterisk before the pointer
	printf("a: %d\n", (*fp)(a));
	return (0);
}
