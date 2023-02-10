#include	<stdio.h>

char	*ft_itoa(int n);

int	main(void)
{
	char *p;
	//printf("%s\n", ft_itoa(-2147483648));
	p = ft_itoa(111);
	printf("p:%s\n", p);

	//printf("%s\n", ft_itoa(8));
	//printf("%s\n", ft_itoa(188));


//	/* 1 */ printf("%s\n", ft_itoa(0));
//	/* 2 */ printf("%s\n", ft_itoa(-0));
//	/* 3 */ printf("%s\n", ft_itoa(+0));
//	/* 4 */ printf("%s\n", ft_itoa(1));
//	/* 5 */ printf("%s\n", ft_itoa(-1));
//	/* 6 */ printf("%s\n", ft_itoa(+1));
//	/* 7 */ printf("%s\n", ft_itoa(7));
//	/* 8 */ printf("%s\n", ft_itoa(-7));
//	/* 9 */ printf("%s\n", ft_itoa(+7));
//	/* 10 */ printf("%s\n", ft_itoa(42));
//	/* 11 */ printf("%s\n", ft_itoa(-42));
//	/* 12 */ printf("%s\n", ft_itoa(+42));
//	/* 13. INT_MAX */ printf("%s\n", ft_itoa(2147483647));
//	/* 14. INT_MIN */ printf("%s\n", ft_itoa(-2147483648));
//	/* 15. INT_MAX - 1 */ printf("%s\n", ft_itoa(2147483646));
//	/* 16. INT_MIN + 1 */ printf("%s\n", ft_itoa(-2147483647));

	return (0);
}
