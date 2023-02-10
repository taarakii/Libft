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
		n = 10;
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

	// set the flag to be 0
	flag = 0;
	// handle negative values
	if (n == -2147483648)
		return ("-2147483648");
	else if (n < 0)
	{
		n = -n;
		//*p = '-';
		s[0] = '-';
		flag = 1;
		//p++;
	}

	//count the number of digits of an integer
	len =  int_len(n);// + flag;
	i = 0;
	while (i < len)
	{
		str[len + flag - i - 1] = (n % 10) + '0';
		n /= 10;
		i++;
	}		
	while (i <= len)
		str[i++] = '\0';
	return (str);
}
