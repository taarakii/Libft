/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:31:49 by taaraki           #+#    #+#             */
/*   Updated: 2022/12/05 23:32:24 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

//a function that displays a string
void	print_string(const char *s)
{
	while (*s)
		write(1, s++, 1);
}

//a function that returns the number of digits of an integer
int	int_len(int n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

//a function that checks if an integer is negative
int	check_negative(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

//a function that handles exceptions
void	check_ex(int nb)
{
	if (nb == 0)
		write(1, "0", 1);
	else
		write(1, "-2147483648\n", 11);
}

//a function that converts integer to a string (an array of chars)
void	ft_putnbr(int nb)
{
	int		len;
	int		i;
	char	str[12];

	if (nb == 0 || nb == -2147483648)
	{
		check_ex(nb);
		return ;
	}
	else if (check_negative(nb))
	{
		nb = (-1) * nb;
		write(1, "-", 1);
	}
	len = int_len(nb);
	i = 0;
	while (i < len)
	{
		str[len - i - 1] = (nb % 10) + '0';
		nb /= 10;
		i++;
	}
	str[len] = '\0';
	print_string(str);
}
