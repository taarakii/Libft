/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: taaraki <taaraki@student.42.jp>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 15:40:45 by taaraki           #+#    #+#             */
/*   Updated: 2023/03/12 17:46:27 by taaraki          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	"libft.h"

//static void	print_str(char **s);

static int	count_split(const char *s, char c)
{
	char	*p;
	int		i_split;
	int		len;

	p = (char *)s;
	len = 0;
	i_split = 0;
	while (*p)
	{	
		if (*p == c)
		{
			i_split++;
			len = 0;
		}
		else
		{
			len++;
		}
		p++;
	}
	return (i_split);
}

static size_t	count_len(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**new;
	size_t	array_size;
	size_t	i;
	size_t	j;
	size_t	len;
//
	//const char	str[] = "\0";

	if (s == NULL)
		return (NULL);
	//if (ft_strncmp(s, (char const *)ft_strdup(""), 1) == 0)
/*
	printf("\n$");
	//if (ft_strncmp(s, str, (size_t)1) == 0)
	if (*s == '\0')
		return (NULL);
	printf("\n#");
*/
	//what happens when splits are 0, and array_size is 1 AND 
	// there are no characters?
	array_size = count_split(s, c) + 1;
	new = (char **)malloc(sizeof(char *) * (array_size + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < array_size)
	{
		if (*s == '\0')
			break ;
		len = count_len(s, c);
		if (len == 0)
		{
			s++;
			continue;
		}
		new[i] = (char *)malloc(sizeof(char) * (len + 1));
		if (new[i] == NULL)
		{
			free(new);
			return (NULL);
		}
		j = 0;
		while (j < len)
			new[i][j++] = *s++;
		new[i][j] = '\0';
		s++;
		i++;
	}
	new[array_size] = NULL;
//	new[0] = NULL;
	return (new);
}
/*
static void	print_str(char **s)
{
	putchar('\n');
	while(*s != NULL)
	{
		printf("[%s]", *s);
		s++;
	}
}
*/

/*
char	**ft_split(char const *s, char c)
{
	char	**new;
	int		array_size;
	int		len_max;
	int		j;
	int		k;

	array_size = count_split(s, &len_max, c, &k) + 1;
	new = secure_mem(array_size, len_max);
	while (array_size)
	{
		if (*s == c || *s == '\0')
		{
			array_size--;
			s++;
			continue ;
		}
		j = 0;
		while (*s != c && *s)
			new[k][j++] = *s++;
		s++;
		new[k++][j] = '\0';
		array_size--;
	}
	new[k] = NULL;
	return (new);
}
*/
