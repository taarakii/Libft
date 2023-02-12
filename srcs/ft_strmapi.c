#include	<stdlib.h>
#include	"libft.h"

//@param
// s: The string on which to iterate.
// f: The function to apply to each character.
//@return_val
// The string created from the successive applications of 'f'
// Returns NULL if the allocation fails.
//@description
// Applies the function 'f' to each character of the string 's',
// and passing its index as first argument to create a new string
// resulting from successive applications of 'f'.

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*p;
	unsigned int	len;
	unsigned int	i;
	
	len = 0;
	len = (unsigned int)ft_strlen(s);
	p = (char*)malloc((len + 1) * sizeof(char) + 1);	
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = (*f)(len, s[i]);
		i++;
	
	return (p);
}
