#include <stddef.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (*s1 && *s2 && n > 0)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		n--;
	}
	if (*s1 == 0 || *s2 == 0)
		return (*s1 - *s2);
	//if (n != 0)
	//	return (*s1 - *s2);
	return (0);
}
