/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/07 20:52:58 by taaraki           #+#    #+#             */
/*   Updated: 2023/02/07 20:52:59 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stddef.h>

int	ft_strcmp(const char *s1, const char *s2)
{
	while (*s2)
	{
		if (*s1 != *s2)
			return ((unsigned char)*s1 - (unsigned char)*s2);
		s1++;
		s2++;
	}
	return (0);
}
