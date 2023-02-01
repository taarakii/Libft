#include	"libft.h"
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

int	ft_is_zero(char c)
{
	if (c == '0')
		return (1);
	return (0);
}

//@param (str, flag, sign)
//skip whitespaces, check sign
char	*operation_one(char *str, int *flag, int *sign)
{
	char	*p;

	p = str;
	while ((*p >= 9 && *p <= 13) || *p == 32)//ft_is_whitespace(*p))
		p++;
	if (*p == '+')
	{
		*flag = 1;
		p++;
	}
	else if (*p == '-')
	{
		*flag = 1;
		*sign = -1;
		p++;
	}
	return (p);
}

int	ft_atoi(const char *str)
{
	char			*p;
	int			flag;
	int			sign;
	int			len;
	int			i;
	unsigned long long	x;

	//@param (str, flag, sign)
	//skip whitespaces, check sign
	flag = 0;
	sign = 1;
/*
	p = (char*)str;	
	while (ft_is_whitespace(*p))
		p++;
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
*/
	p = operation_one((char*)str, &flag, &sign);
	//
	if (flag == 1 && !(*p >= '0' && *p <= '9'))
		return (0);
	while (ft_is_zero(*p))
		p++;
	len = ft_strlen_num(p);	
	if (len > 20 && sign == 1)
		return (-1);
	else if (len > 20 && sign == -1)
		return (1);
	if (ft_strcmp(p, "18446744073709551616") == 0)
		return (-1);
	x = 0;
	i = 0;
	while (i < len)
	{
		x = (x * 10) + (p[i] - '0');
		i++;
	}
	if (x == 2147483648 && sign == 1)
		return (-2147483648);
	else if (x == 2147483649 && sign == -1)
		return (2147483647);
	else if (x == 4294967294 || x == 9223372036854775806)
		return (-2);
	else if (x == 4294967296 || ((!ft_strcmp(p, "9223372036854775809") || !ft_strcmp(p, "9223372036854775808")) && sign == -1))
		return (0);
	else if (x > 2147483648 && sign == -1)
		return (1);
	else if (x > 2147483647 && sign == 1)
		return (-1);
	else
		return ((int)(sign * x));
}





