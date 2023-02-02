#include	<stdio.h>

int	main(void)
{
	char *s = "libft-test-tokyo";
	/* 1 */ printf("%s\n", ft_substr(s, 0, 100), s);
	/* 3 */ printf("%s\n", (ft_substr(s, 5, 100), s + 5);
	/* 3 */ printf("%s\n", (ft_substr(s, 10, 100), s + 10);
	/* 4 */ printf("%s\n", (ft_substr(s, 15, 100), s + 15);
	/* 5 */ printf("%s\n", (ft_substr(s, 20, 100), "");
	/* 6 */ printf("%s\n", (ft_substr(s, 0, 5), "libft");
	/* 7 */ printf("%s\n", (ft_substr(s, 5, 5), "-test");
	/* 8 */ printf("%s\n", (ft_substr(s, 10, 5), "-toky");
	/* 9 */ printf("%s\n", (ft_substr(s, 15, 5), "o");
	/* 10 */ printf("%s\n", (ft_substr(s, 20, 5), "");
	/* 11 */ printf("%s\n", (ft_substr(s, 0, 0), "");
	/* 12 */ printf("%s\n", (ft_substr(s, 5, 0), "");
	/* 13 */ printf("%s\n", (ft_substr(s, 10, 0), "");
	/* 14 */ printf("%s\n", (ft_substr(s, 15, 0), "");
	/* 15 */ printf("%s\n", (ft_substr(s, 20, 0), "");
}
