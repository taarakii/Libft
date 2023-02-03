#include	<stdio.h>

char	*ft_strtrim(char const *s1, char const *set);

int	main(void)
{
	/* 1 */ printf("%s\n", ft_strtrim("hello world", "world");//"hello ");
	/* 2 */ printf("%s\n", ft_strtrim("hello world", "hello");//" world");
	/* 3 */ printf("%s\n", ft_strtrim("hello world", "");//"hello world");
	/* 4 */ printf("%s\n", ft_strtrim("", "");//"");
	/* 5 */ printf("%s\n", ft_strtrim("    hello world     ", " ");//"hello world");
	/* 6 */ printf("%s\n", ft_strtrim(" \n\t\r    hello \n\t\r world     \r\t\n\t \r\n", " \n\t\r");//"hello \n\t\r world");
	/* 7 */ printf("%s\n", ft_strtrim("hello world", "abcdefghijklmnopqrstuvwxyz");//" ");
}

