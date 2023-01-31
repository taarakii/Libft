#include	<stddef.h>
#include	<stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n > 0)
	{
		if (*s1 != *s2)
		{
			if (*s2 < 0)
				return (-128 + *s1 + (-128 - *s2));
			//printf("s1:%d\n", *s1);
			//printf("s2:%d\n", *s2);
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}
