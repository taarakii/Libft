#include <stddef.h>

void *ft_memchr(const void *s, int c, size_t n)
{
	char		*p;	

	p = (char*)s;
	while (n > 0)
	{
		if ((unsigned char)*p == (unsigned char)c)
			return ((void*)p);
		p++;
		n--;
	}
	return (0);
}
