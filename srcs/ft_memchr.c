#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	char		*p;	
	unsigned char	check;

	check = (unsigned char)c;
	p = (char*)s;
	while (*p && n > 0)
	{
		if ((unsigned char)*p == check)
			return ((void*)p);
		p++;
		n--;
	}
	return (0);
}
