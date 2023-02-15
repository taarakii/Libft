#include	<stdio.h>

typedef struct	s_list
{
 void		*content;
 struct s_list	*next;
}		t_list;

t_list	*ft_lstnew(struct s_list *prev);

int	main(void)
{
	t_list	*node;
	t_list	*new;

	(int)(node->content) = 11;	
	new = ft_lstnew(node->content);	
	if (new == NULL)
	{
		printf("null\n");
		return (1);
	}
	printf("not null\n");	
	printf("new->content:%d\n", (int)(new->content));
	return (0);
}
