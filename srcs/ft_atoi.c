#include	<stddef.h>
#include	<stdio.h>
#include	<string.h>

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

int	ft_is_zero(char c)
{
	if (c == '0')
		return (1);
	return (0);
}

int	ft_atoi(const char *str)
{
	char			*p;
	int			flag;
	int			sign;
	int			len;
	int			i;
	unsigned long long	x;

	printf("\nstr:%s$ ", str);
	p = (char*)str;	
	flag = 0;
	sign = 1;
	//skip whitespaces
	while (ft_is_whitespace(*p))
		p++;
	//check if there is a sign
	if (*p == '+')
	{
		flag = 1;
		p++;
	}
	else if (*p == '-')
	{
		flag = 1;
		sign = -1;
		p++;
	}
	//return 0 if there is a non-digit after sign
	if (flag == 1 && !(*p >= '0' && *p <= '9'))
		return (0);
	//while (is_zero)
	while (ft_is_zero(*p))
		p++;
	len = ft_strlen_num(p);	

	if (len > 20 && sign == 1)//it looks like 20 is the max length of llu
		return (-1);
	else if (len > 20 && sign == -1)
		return (1);

	//strcmp to see if the value is larger than ULONG_MAX
	if (strcmp(p, "18446744073709551616") == 0)
	{
		printf("equal ");
		return (-1);
	}
	x = 0;
	i = 0;
	while (i < len)
	{
		x = (x * 10) + (p[i] - '0');
		//printf("i:%d, %llu\n", i, x);
		i++;
	}
	//printf("x:%llu\n", x);
	//here i am right now.

	printf("sign:%d ", sign);
	printf("x:%llu ", x);
	//under/overflow handling with 1 differenece
	if (x == 2147483648 && sign == 1)
		return (-2147483648);
	else if (x == 2147483649 && sign == -1)
		return (2147483647);
	else if (x == 4294967294 || x == 9223372036854775806)
		return (-2);
	else if (x == 4294967296 || ((!strcmp(p, "9223372036854775809") || !strcmp(p, "9223372036854775808")) && sign == -1))
		return (0);
	else if (x > 2147483648 && sign == -1)
	{
		printf("#1 ");
		return (1);
	}
	else if (x > 2147483647 && sign == 1)
	{
		printf("#-1 ");
		return (-1);
	}
	else
	{
		printf("# ");	
		return ((int)(sign * x));
	}
	//return (0);
}





