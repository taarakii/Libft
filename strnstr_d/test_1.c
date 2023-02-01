#include	<stdio.h>
#include	<string.h>

char	*ft_strnstr(const char *haystatck, const char *needle, size_t len);

int	main(void)
{
        char *str = "libft-test-tokyo";
        int     len = strlen(str);
        for (int i = 0; i <= len; i++)
        {
                printf("%d:'%s' '%s'\n", i, ft_strnstr(str, "test", i), strnstr(str, "test", i));
                //printf("%d:'%s' '%s'\n", i, ft_strnstr(str, "libft-test-tokyo", i), strnstr(str, "libft-test-tokyo", i));	
	}
	return (0);
}
