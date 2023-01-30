#include	<stddef.h>
#include	<stdio.h>

int	ft_is_whitespace(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	else
		return (0);
}

int	ft_strlen_num(char *s)
{
	int	len;

	len = 0;
	while(s[len] >= '0' && s[len] <= '9')
		len++;
	return (len);
}

int	ft_atoi(const char *str)
{
	char	*p;
	int	flag;
	int	sign;
	int	len;
	int	i;
	long	x;

	p = (char*)str;	
	flag = 0;
	sign = 1;
	//skip whitespaces
	while (ft_is_whitespace(*p))
		p++;
	//check if there is a sign
	if (*p == '+' || *p == '-')
	{
		flag = 1;
		sign = -1;
		p++;
	}
	//return 0 if there is a non-digit after sign
	if (flag == 1 && !(*p >= '0' && *p <= '9'))
		return (0);
	len = ft_strlen_num(p);	

	if (len > 10) 
		return (0);
	printf("len:%d\n", len);
	x = 0;
	i = 0;
	while (i < len)
	{
		x = (x * 10) + (p[i] - '0');
		printf("i:%d, %ld\n", i, x);
		i++;
	}
	x = x * sign;
	//here i am right now.

	if (x <= 2147483647 && x >= -2147483648)
		return ((int)x);
	return (0);
}






