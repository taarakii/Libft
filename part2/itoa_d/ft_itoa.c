#include	<stdio.h>
#include	<stdlib.h>
//#include	"libft.h"

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
	char	*p;
	int	flag;//flag for whether the number is negative or not
	int	len;
	int	i;

	flag = 0;
	// handle negative values
	if (n == -2147483648)
		return ("-2147483648");
	else if (n < 0)
	{
		n = -n;
		flag = 1;
	}
	//count the number of digits of an integer
	len =  int_len(n);
	//dynamically allocate the memory with malloc
	p = (char*)malloc((len + flag + 1) + sizeof(char));
	if (flag == 1)
		*p = '-';
	i = 0;
	while (i < len)
	{
		p[len + flag - i - 1] = (n % 10) + '0';
		n /= 10;
		i++;
	}		
	p[len + flag] = '\0';
	return (p);
}
