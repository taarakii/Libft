#include <stddef.h>

void	ft_bzero(void *s, size_t n)
{
	if (n == 0)
		return ;
	while (n > 0)
	{
		*((char*)s) = 0;
		s += sizeof(char);
		n--;
	}
}
