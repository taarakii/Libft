#include	"libft.h"
#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>

int	main(void)
{
	t_list  *lst = ft_lstnew(strdup("Hello"));
	ft_lstadd_back(&lst, ft_lstnew(strdup(" World")));
	return (0);
}
