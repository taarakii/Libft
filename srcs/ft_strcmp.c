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