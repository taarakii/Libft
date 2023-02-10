#include	<stdio.h>

char	*ft_itoa(int n);

int	main(void)
{
	/* 1 */ printf("%s", ft_itoa(0));
	/* 2 */ printf("%s", ft_itoa(-0));
	/* 3 */ printf("%s", ft_itoa(+0));
	/* 4 */ printf("%s", ft_itoa(1));
	/* 5 */ printf("%s", ft_itoa(-1));
	/* 6 */ printf("%s", ft_itoa(+1));
	/* 7 */ printf("%s", ft_itoa(7));
	/* 8 */ printf("%s", ft_itoa(-7));
	/* 9 */ printf("%s", ft_itoa(+7));
	/* 10 */ printf("%s", ft_itoa(42));
	/* 11 */ printf("%s", ft_itoa(-42));
	/* 12 */ printf("%s", ft_itoa(+42));
	/* 13. INT_MAX */ printf("%s", ft_itoa(2147483647));
	/* 14. INT_MIN */ printf("%s", ft_itoa(-2147483648));
	/* 15. INT_MAX - 1 */ printf("%s", ft_itoa(2147483646));
	/* 16. INT_MIN + 1 */ printf("%s", ft_itoa(-2147483647));

	return (0);
}
