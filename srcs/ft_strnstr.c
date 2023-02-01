#include	<stddef.h>

size_t	ft_strlen(char * s)
{
	size_t	len;

	len = 0;
	while (s[len])
		len++;
	return (len);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*p1;
	char	*p2;
	//size_t	len1;
	size_t	len2;
	size_t	i;
	//size_t	j;

	p1 = (char*)haystack;
	p2 = (char*)needle;
	//len1 = ft_strlen(p1);
	len2 = ft_strlen(p2);
	if (*p2 == 0)
		return (p1);
	//j = 0;
	while (*p1 && 0 < len)
	{
		if (*p1 == p2[0])
		{
			i = 0;
			while (p1[i] == p2[i] && i < len)//(j + i) < len)//len1)
			{
				if (i + 1 == len2)
					return (p1);
				i++;
			}
		}
		p1++;
		//j++;
		len--;	
	}	
	return (NULL);
}
