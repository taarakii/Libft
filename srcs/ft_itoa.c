#include	<stdio.h>
#include	<stdlib.h>
//#include	"libft.h"

//@param
// n: the integer to convert.
//@return_val
// The string representing the integer. 
// NULL if the allocation fails.

//@description
// Allocates and returns a string repreesenting 
// the integer received as an argument.
// Negative numbers must be handled.

char	*ft_itoa(int n);
int	int_len(int n);

int	int_len(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}


char	*ft_itoa(int n)
{
	char	s[12];
	char	*p;
	int	flag;//flag for whether the number is negative or not
	int	len;
	int	i;

	p = s;
	// set the flag to be 0
	flag = 0;
	// handle negative values
	if (n == -2147483648)
		return ("-2147483648");
	else if (n < 0)
	{
		n = -n;
		//*p = '-';
		//p[0] = '-';
		//s[0] = '-';
		flag = 1;
		//p++;
	}

	//count the number of digits of an integer
	len =  int_len(n);// + flag;
	printf("len:%d\n", len);

	//dynamically allocate the memory with malloc
	p = (char*)malloc((len + flag + 1) + sizeof(char));
	if (flag == 1)
		*p = '-';
	i = 0;
	while (i < len)
	{
		printf("n:%3d v:%2d index:%2d\n", n, (n % 10), (len + flag - i - 1));
		p[len + flag - i - 1] = (n % 10) + '0';
		n /= 10;
		i++;
	}		
	//printf("p:%s\n", p);
	//printf("len + flag: %3d\n", len + flag);
	p[len + flag] = '\0';
	printf("p:%s\n", s);
	//while (i <= 12)
	//	s[i++] = '\0';
	return (p);
}
