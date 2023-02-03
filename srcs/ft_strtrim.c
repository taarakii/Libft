#include	<stdio.h>
#include	<stdlib.h>
#include	<stddef.h>
#include	"libft.h"

//@function_name
// ft_strtrim
//@param
// s1: The string to be trimmed.
// set: The reference set of characters to trim.
//@return_val
// The trimmed string.
// NULL if the allocation fails.
//@description
// Allocates (with malloc(3)) and returns a copy of 's1'
// with the characters specified in 'set' removed from 
// the beginning and the end of the string.

//I need a function for counting the number of 
// occurence of a set of characters in a string
// I can see strstr as a reference.
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
	int	store;

	p = new;
	temp = p;
	flag = 0;
	store = 0;
	while (*h)
	{
		//when I have while loop right here, I get to remove all patterns
		// of string from the original.
		//Somehow, I need to find a way to only remove the patterns
		// that appear at the beginning and end of the string.
		//1. use flag, store the num to add to the pointer
		store = 0;
		while (*h == n[0])///if (*h == n[0])
		{
			i = 0;
			while (h[i] == n[i])
			{
				if (i++ == ft_strlen(n) - 1)
				{
					//store += ft_strlen(n);
					h += ft_strlen(n);		
					//trimmer(h, n, ft_strlen(n));
					flag = 1;
				}
			}
		}
		//if (flag == 1)
		//	h += store;
		*p = *h;
		flag = 0;
		h++;
		p++;
	}
	*(p + 1) = '\0';
	return (temp);
}
/*
char	*strstr_and_strnstr()
{

	return (p);
}
*/


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








