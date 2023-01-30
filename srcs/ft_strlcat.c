#include	<stddef.h>

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	char	*p1;
	char	*p2;
	size_t	len;

	len = 0;
	p1 = (char*)dst;
	p2 = (char*)src;
	while (p1[len])
		len++;
	while (*p2 && len < dstsize)
	{
		p1[len] = *p2;
		p2++;	
		len++;
	}
	p1[len] = '\0';
	return (len);
}
