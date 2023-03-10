#include	"libft.h"
#include	<stdio.h>	

int	main(void)
{
	char	s1[] = "123abcde321321";
	char	s2[] = "123";
	char	*p;
	
	p = ft_strtrim(s1, s2);
	printf("trimmed:'%s'\n", p);
	return (0);
}
