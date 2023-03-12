/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:22:31 by taaraki           #+#    #+#             */
/*   Updated: 2023/03/12 14:07:32 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static size_t	int_len(int n)
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

static char	*convert_int(int n, char *p, size_t len, size_t neg_flag)
{
	size_t	i;

	if (neg_flag == 1)
		*p = '-';
	i = 0;
	while (i < len)
	{
		p[len + neg_flag - i++ - 1] = (n % 10) + '0';
		n /= 10;
	}
	p[len + neg_flag] = '\0';
	return (p);
}

//neg_flag is for checking if the value is negative
//and securing an extra memory at the begining of the string.
char	*ft_itoa(int n)
{
	char	*p;
	size_t	neg_flag;
	size_t	len;

	neg_flag = 0;
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	else if (n < 0)
	{
		n = -n;
		neg_flag = 1;
	}
	len = int_len(n);
	p = (char *)malloc(sizeof(char) * (len + neg_flag + 1));
	if (p == NULL)
		return (NULL);
	p = convert_int(n, p, len, neg_flag);
	return (p);
}
