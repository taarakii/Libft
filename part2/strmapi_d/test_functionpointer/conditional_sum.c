#include	<stdio.h>

// Example of function pointer passed as an argument
// Pass function pointers to other functions as a function argument.
// Those are called CALLBACK FUNCTION as receiving function calls them back.

// List of functions
int	conditional_sum(int a, int b, int (*ptr)());
int	sqaure(int a);
int	cube(int a);

int	conditional_sum(int a, int b, int (*ptr)())
{
	// modify the arguments according to the 
	// condition of the function ptr points to.
	a = (*ptr)(a);
	b = (*ptr)(b);

	return (a + b);
}

int	sqaure(int a)
{
	return (a * a);
}

int	cube(int a)
{
	return (a * a * a);
}

int	main(void)
{
	// declare a function pointer of
	// return_type int, and datatype_of_arguments int
	int	(*fp)(int);
	int	sum;

	fp = sqaure;
	sum = conditional_sum(2, 3, fp);
	printf("Sqaure sum: %d\n", sum);

	fp = cube;
	sum = conditional_sum(2, 3, fp);
	printf("Cube sum:   %d\n", sum);
	return (0);
}

