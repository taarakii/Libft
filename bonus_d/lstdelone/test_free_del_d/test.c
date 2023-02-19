#include	<stdio.h>
#include	<stdlib.h>

typedef struct	s_list
{
 void		*content;
 //
 int		num;
 struct s_list	*next;
}		t_list;


int	main(void)
{
	t_list	*p;
	int	*num;
	int	a;
	
	p = (t_list *)malloc(sizeof(t_list) + 1);
	//(int)(p->num) = 9;
	p->num = 9;
	
	a = 9;
	num = &a;//for a pointer, I need to assign the address of a variable to a pointer.
	//*num = a;//so this is wrong.
	//p->content = "abc";

	//(int *)p->content = num;//this is called assignment cast, and it is illegal.
	//Note: for assignment a = b; the value of b is converted to a, provided that it's convertable.
	p->content = num;
	//how do I used malloc? do I need to create a list (not a pointer) first? 

	printf("%d\n", (int)(p->num));
	printf("%d\n", (int)*((int *)(p->content)));

	free(p);
	printf("%d\n", (int)(p->num));
	printf("%d\n", (int)*((int *)(p->content)));

	return (0);
}
