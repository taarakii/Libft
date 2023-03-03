/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 16:31:49 by taaraki           #+#    #+#             */
/*   Updated: 2023/03/03 16:45:10 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

//a function that displays a string
static void	print_string_fd(const char *s, int fd)
{
	while (*s)
		write(fd, s++, 1);
}

//a function that returns the number of digits of an integer
static int	int_len(int n)
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
static int	check_negative(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

//a function that handles exceptions
static void	check_ex(int nb, int fd)
{
	if (nb == 0)
		write(fd, "0", 1);
	else
		write(fd, "-2147483648", 11);
}

//a function that converts integer to a string (an array of chars)
void	ft_putnbr_fd(int nb, int fd)
{
	int		len;
	int		i;
	char	str[12];

	if (nb == 0 || nb == -2147483648)
	{
		check_ex(nb, fd);
		return ;
	}
	else if (check_negative(nb))
	{
		nb = (-1) * nb;
		write(fd, "-", 1);
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
	print_string_fd(str, fd);
}
