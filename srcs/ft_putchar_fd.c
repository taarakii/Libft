/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 17:56:05 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/12 17:58:43 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<unistd.h>
#include	"libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);

	return ;
}
