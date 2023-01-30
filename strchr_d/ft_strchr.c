char	*ft_strchr(const char *s, char c)
{
	char	*p;

	p = (char *)s;
	while (*p)
	{
		if (*p == c)
			return (p);
			//break;
		p++;
	}
	if (*p == c)
		return (p);
	return (0);
}
