/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:22:31 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/14 15:24:07 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	"libft.h"

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
	int		neg_flag;
	int		len;
	int		i;

	neg_flag = 0;
	if (n == -2147483648)
		return ("-2147483648");
	else if (n < 0)
	{
		n = -n;
		neg_flag = 1;
	}
	len = int_len(n);
	p = (char *)malloc((len + neg_flag + 1) + sizeof(char));
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
