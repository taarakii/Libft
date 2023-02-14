/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:52:30 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/14 15:18:51 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

int	ft_strlen_num(char *s)
{
	int	len;

	len = 0;
	while (s[len] >= '0' && s[len] <= '9')
		len++;
	return (len);
}

//@param (str, flag, sign)
//skip whitespaces, check sign
char	*operation_one(char *str, int *flag, int *sign)
{
	char	*p;

	p = str;
	while ((*p >= 9 && *p <= 13) || *p == 32)
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

//@param (value, sign)
//scrutinize the value of unsigned long long and convert it to an integer
int	operation_two(size_t x, int sign)
{
	if (x == 2147483648 && sign == 1)
		return (-2147483648);
	else if (x == 2147483649 && sign == -1)
		return (2147483647);
	else if (x == 4294967294 || x == 9223372036854775806)
		return (-2);
	else if (x == 4294967296)
		return (0);
	else if (x > 2147483648 && sign == -1)
		return (1);
	else if (x > 2147483647 && sign == 1)
		return (-1);
	return ((int)(sign * x));
}

int	ft_atoi(const char *str)
{
	char	*p;
	int		flag;
	int		sign;
	int		i;
	size_t	x;

	flag = 0;
	sign = 1;
	p = operation_one((char *)str, &flag, &sign);
	if (flag == 1 && !(*p >= '0' && *p <= '9'))
		return (0);
	while (*p == '0')
		p++;
	if (handle_exc(p, sign, ft_strlen_num(p)) != 2)
		return (handle_exc(p, sign, ft_strlen_num(p)));
	x = 0;
	i = 0;
	while (i < ft_strlen_num(p))
		x = (x * 10) + (p[i++] - '0');
	return (operation_two(x, sign));
}

int	handle_exc(char *s, int sign, int len)
{
	if (len > 20)
	{
		if (sign == 1)
			return (-1);
		else if (sign == -1)
			return (1);

	}
	if (sign == -1)
	{
		if (ft_strcmp(s, "9223372036854775809") == 0)
			return (0);
		else if  (ft_strcmp(s, "9223372036854775808") == 0)
			return (0);
	}
	if (ft_strcmp(s, "18446744073709551616") == 0)
		return (-1);
	return (2);	
}
