#include <stdio.h>
#include <string.h>

char*	ft_strchr(const char *s, int c);

int	main(int argc, char *argv[])
{
	//char *str = "this is a test 42. \nand, a new line.";
	char	*str = "libft-test-tokyo";
	char *p;
	
	if (argc == 2)
	{
       		printf("%s\n", str);

        	p = ft_strchr(str, 'l' + 256);//argv[1][0]);
        	printf("=====\n");
		printf("%d\n", 'l' + 256);
		printf("%c\n", 'l' + 256);
       		printf("%s\n", p);
	}
	else
		printf("wronf format type\n");
	return (0);
}
