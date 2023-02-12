#include	<stdio.h>

// Example of array of function pointers
// Like any other data types we can create an array to store function pointers in C. 
// List of functions
float	add(int, int);
float	multiply(int, int);
float	divide(int, int);
float	subtract(int, int);

float	add(int a, int b)
{
	return (a + b);
}

float	multiply(int a, int b)
{
	return (a * b);
}

float	divide(int a, int b)
{
	return (a / b);
}

float	subtract(int a, int b)
{
	return (a - b);
}

int	main(void)
{
	int	a;
	int	b;
	float	result;
	// define an array of function pointers
	//@return_type: float
	//@funtion args: 2 ints
	float	(*operation[4])(int, int);

	operation[0] = add;
	operation[1] = multiply;
	operation[2] = divide;
	operation[3] = subtract;

	printf("Enter two values: ");
	scanf("%d%d", &a, &b);

	result = (*operation[0])(a, b);
	printf("Addition (%d,%d): %.1f\n", a, b, result);
	result = (*operation[1])(a, b);
	printf("Subtraction (%d,%d): %.1f\n", a, b, result);
	result = (*operation[2])(a, b);
	printf("Multiplication (%d,%d): %.1f\n", a, b, result);
	result = (*operation[3])(a, b);
	printf("Division (%d,%d): %.1f\n", a, b, result);

	return (0);
}
