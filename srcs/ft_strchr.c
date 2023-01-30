char	*ft_strchr(const char *s, int c)
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
		//p = s;
	//return (p);
	return (0);
}
