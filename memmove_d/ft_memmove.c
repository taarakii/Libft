#include	<stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*p1;
	char	*p2;

	p1 = (char*) dst;
	p2 = (char*) src;

	while (len > 0)
	{
		*p1 = *p2;
		p1++;
		p2++;
		len--;
	}
	return (dst);
}
