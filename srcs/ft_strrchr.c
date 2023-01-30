char *ft_strrchr(const char *s, int c)
{
	char *p;
	int	flag;


	p = (char*)s;
	flag = 0;
	while (*s)
	{
		if (*s == c)	
		{
			p = (char*)s;
			flag = 1;
		}
		s++;
	}
	if (*s == c)
		return ((char*)s);
	if (flag == 1)
		return (p);
	return (0);
}
