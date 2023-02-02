#include	<stdlib.h>

//@param
// s: The string from which to create the substring.
// start: The start index of the subsring in the string 's'
// len: The maximum lenght of the substring.
//@return_val
// The substring. NULL if the allocation fails.
//@discription
// Allocates (with malloc(3)) and returns a substring from the string 's'.
// The substring begins at index 'start' and is of maximum size 'len'.
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;

	p = (char*)s;
	return (p);
}
