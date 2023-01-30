#include	<stddef.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*p;
	size_t	i;

	p = dst;
	if (dst > src)
	{
		while (len > 0)
		{
			*(char*)(dst + len - 1) = *(char*)(src + len - 1);
			len--;
		}
	}
	else
	{
		while (len > 0)
		{
			*(char*)dst++ = *(char*)src++;
			len--;
		}
	}
	return (p);
}
