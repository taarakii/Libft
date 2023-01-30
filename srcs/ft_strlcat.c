#include	<stddef.h>

int	ft_strlen(char * s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize)
{
	char	*p1;
	char	*p2;
	size_t	len;
	size_t	return_val;

	p1 = (char*)dst;
	p2 = (char*)src;
	len = ft_strlen(p1);

	if (dstsize < len)
		return (ft_strlen(p2) + dstsize);
	return_val = len + ft_strlen(p2);
	while (*p2 && len < dstsize - 1)//dstsize is 1 + len(dst)
	{
		p1[len] = *p2;
		p2++;	
		len++;
	}
	p1[len] = '\0';
	return (return_val);
}
