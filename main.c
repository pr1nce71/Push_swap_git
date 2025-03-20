#include "push_swap.h"
// For Parser:
// 1. Check the arguments for errors.

t_stack_node *parser(char **argv)
{
	t_stack_node *a = NULL;
	int i = 0;

	while (argv[i])
	{
		if (i == 0)
			lstnew(argv[i]);
		else
			lst_add_back(a, atoi(argv[i]));	
	}
	return (a);
}

int main(int argc, char **argv){
	if (argc < 2)
		return 1;
	t_stack_node *a = NULL;
	t_stack_node *b = NULL;
	check_for_errors(argv); // errors through write(2, "Error\n", 6);
	a = parser(argv);
}
