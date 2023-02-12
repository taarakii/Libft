#include	<stdio.h>

static int (*f)(int, char) = NULL;
/*
static char F(unsigned int i, char c)
{
	(void)i;
	return (f(c));
};
*/
static int plus_one(int c)
{
	return (c + 1);
}

int	my_toupper(int i, char c)
{
	(void)c;
	if (i >= 'a' && i <= 'z')
		i += 'A' - 'a';
	return (i);
}

int	tolower(int i)
{
	if (i >= 'A' && i <= 'Z')
		i += 'a' - 'A';
	return (i);
}

int main(void)
{
//
	char	s[] = "abcd";

	printf("%s\n", s);
	f = my_toupper;
	for (int i = 0; i < 4; i++)
	{
		s[i] = (*f)(s[i], s[i]);	
	}
	printf("%s\n", s);
//

//	/* 1 */ printf("%s\n", ft_strmapi("abcde", F), "ABCDE");
//	/* 2 */ printf("%s\n", ft_strmapi("Hello World!", F), "HELLO WORLD!");
//	/* 3 */ printf("%s\n", ft_strmapi("12345", F), "12345");
//	f = tolower;
//	/* 4 */ printf("%s\n", ft_strmapi("ABCDE", F), "abcde");
//	/* 5 */ printf("%s\n", ft_strmapi("Hello World!", F), "hello world!");
//	/* 6 */ printf("%s\n", ft_strmapi("12345", F), "12345");
//	f = plus_one;
//	/* 7 */ printf("%s\n", ft_strmapi("ABCDE", F), "BCDEF");
//	/* 8 */ printf("%s\n", ft_strmapi("Hello World!", F), "Ifmmp!Xpsme\"");
//	/* 9 */ printf("%s\n", ft_strmapi("12345", F), "23456");
	return (0);
}
