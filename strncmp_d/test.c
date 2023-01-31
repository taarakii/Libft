#include	<stdio.h>
#include	<string.h>
#include	<stdlib.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n);

int	main(void)
{
        char *str = "libft-test-tokyo";
        char *cmp = "libft-test-tokyo";
        int     len = strlen(str);
        /* 1 ~ 17 */
	printf("1-17\n");
        for (int i = 0; i <= len; i++)
                printf("%d: %d %d\n", i + 1, ft_strncmp(str, cmp, i), strncmp(str, cmp, i));
        /* 18 ~ 51 */
	printf("18-51\n");
        for (int i = 0; i <= len; i++)
        {
               cmp = strndup(str, i);
               printf("%d: %d %d\n", i + 18, ft_strncmp(str, cmp, i), strncmp(str, cmp, i));
               printf("%d: %d %d\n", i + 18, ft_strncmp(str, cmp, len), strncmp(str, cmp, len));
               free(cmp);
        }
	return (0);
}
