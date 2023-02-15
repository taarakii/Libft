#include	<stdio.h>

/*
// Defintion of Struct
1.
struct	structure_name
{
	definition of arguments;
};

OR

2.
typedef struct	structure_name
{
	definition of arguments;
}	struct_name_wo_def;	
*/


struct my_structure
{
	int	num;
	char	letter;
};

typedef struct	my_structure2
{
	int	num;
	char	letter;
} my_struct;

int	main(void)
{
	//general way of defining a variable of data_type struct
	struct my_structure s1;	
	//when you use typedef, you don't need to use the keyword 'struct'
	my_struct	s2;

	s1.num = 3;
	s1.letter = 'A';
	s2.num = 5;
	s2.letter = 'Z';

	printf("s1.num:%d\n", s1.num);
	printf("s1.letter:%c\n", s1.letter);
	printf("s2.num:%d\n", s2.num);
	printf("s2.letter:%c\n", s2.letter);
	return (0);
}
