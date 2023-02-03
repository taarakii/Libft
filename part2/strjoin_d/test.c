#include	<stdio.h>

char	*ft_strjoin(char const *s1, char const *s2);

int	main(void)
{
	/* 1 */ printf("%s\n", ft_strjoin("hello", "world");//, "helloworld");
	/* 2 */ printf("%s\n", ft_strjoin("", "world");//, "world");
	/* 3 */ printf("%s\n", ft_strjoin("hello", "");//, "hello");
	/* 4 */ printf("%s\n", ft_strjoin("", "");//, "");
}

