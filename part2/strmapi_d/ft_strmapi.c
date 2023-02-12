#include	<stdlib.h>
#include	"libft.h"

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
	}
	return (p);
}
