#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *p;

	p = (unsigned char*)b;
	while (len > 0)
	{
		*p = c;	
		p++;
		len--;
	}
	return (b);
}
