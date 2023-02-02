#include	<stdlib.h>
#include	<stdio.h>

//@param
// s: The string from which to create the substring.
// start: The start index of the subsring in the string 's'
// len: The maximum length of the substring.
//@return_val
// The substring. NULL if the allocation fails.
//@discription
// Allocates (with malloc(3)) and returns a substring from the string 's'.
// The substring begins at index 'start' and is of maximum size 'len'.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*p;
	char		*temp;
	unsigned int	i;
	
	p = (char*)malloc(len * sizeof(char));
	temp = p;
	if (p == NULL)
	{
		printf("Malloc failed to allocate the memory of the size %zu\n", len);
		return (NULL);
	}	
	//printf("Malloc succedd in allocating the memory of the size %zu\n", len);
	s += (start) * sizeof(char);
	i = 0;
	while (i < len)
	{
		*p = *(char*)s;
		p++;
		s++;
		i++;
	}
	return (temp);
}
