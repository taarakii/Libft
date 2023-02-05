#include	<stdio.h>
#include	<stdlib.h>
#include	<stddef.h>
#include	"libft.h"

int	strstr_count(char *h, char *n)
{
	size_t	num;
	int	i;

	num = 0;
	if (*n == 0)
		return (0);
	if (h == NULL)
		return (0);
	while (*h)
	{
		if (*h == n[0])
		{
			i = 0;
			while (h[i] == n[i])
				if (i++ == ft_strlen(n) - 1)
					num++;
		}
		h++;
	}
	printf("\nnum: %zu ", num);
	return (num);
}

char	*findstr_and_skip(char *new, char *h, char *n)
{
	char	*p;
	char	*temp;
	int	i;
	int	flag;

	p = new;
	temp = p;
	flag = 0;
	while (*h)	
	{
		while (trimmed(*h, n))
		{
			i = 0;
			while (h[i] == n[i])
			{
				if (i++ == ft_strlen(n) - 1)
				{
					h += ft_strlen(n);		
					flag = 1;
				}
			}
		}
		*p = *h;
		flag = 0;
		h++;
		p++;
	}
	*(p + 1) = '\0';
	return (temp);
}


char	*skipper(char *h, char *p, int	count_begin, int count_end)
{
	char	*new;
	int	len1;
	int	len2;
	int	len_new;
	int	i;
	int	start_idx;
	//int	end_idx;

	len1 = ft_strlen(h);
	len2 = ft_strlen(p);
	start_idx = count_begin * len2;
	//end_idx = len1 - (count_end * len2) - 1;
	len_new = len1 - count_begin - count_end;
	new = (char*)malloc((len_new) * sizeof(char) + 1);
	if (new == NULL)
	{
		printf("\nAllocation fails.");
		return (NULL);
	}
	i = 0;
	while (i < len_new)
	{
		new[i] = h[start_idx];
		start_idx++;
		i++;
	}
	return (new);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char *p;
	int	count_b;
	int	count_e;	
	
	count_b = 0;
	count_e = 0;
	count_b = count_begin((char*)s1, (char*)set);
	count_e = count_end((char*)s1, (char*)set);
	p = skipper((char*)s1, (char*)set, count_b, count_e);
	if (p == NULL)
		printf("\nis NULL");
	else
		printf("\nis not NULL");
	return (p);
}


/*
char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	char	*temp;
	int	x;//x: the number of occurence of set in s1
	int	size;

	printf("\nlen(s1): %d", ft_strlen(s1));
	printf("\nlen(set): %d", ft_strlen(set));
	x = strstr_count((char*)s1, (char*)set);
	printf("\nlen(x): %d", x);
	size = (ft_strlen(s1) - (x * ft_strlen(set))) * sizeof(char) + 1;
	//p = (char*)malloc((ft_strlen(s1) - (x * ft_strlen(set))) * sizeof(char) + 1);
	p = (char*)malloc(size);
	if (p == NULL)
	{
		printf("\nAllocation fails with the size %d ", size);
		return (NULL);
	}
	printf("\nAllocation succeeds with the size %d ", size);
	temp = p;
//
	if (*(char*)set == 0 || s1 == NULL)
		return ((char*)s1);	
	p = findstr_and_skip(p, (char*)s1, (char*)set);
//
	printf("\ns1:%s", s1);
	printf("\np :%s ", p);
	return (p);
}
*/







