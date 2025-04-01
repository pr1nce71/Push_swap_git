#include "push_swap.h"

int	stack_lenght(t_stack_node *stack)
{
	int	i;

	i = 0;
	while (stack)
	{
		stack = stack ->next;
		i++;
	}
	return (i);
}

void	set_index(t_stack_node *stack)
{
	t_stack_node	*temp;
	t_stack_node	*current;
	int				index;
	int				smallest;

	index = 0;
	current = stack;
	while (current)
	{
		smallest = INT_MAX;
		temp = stack;
		while (temp)
		{
			if (temp ->data < smallest && temp ->index == -1)
				smallest = temp ->data;
			temp = temp ->next;
		}
		temp = stack;
		while (temp)
		{
			if (temp ->data == smallest && temp ->index == -1)
			{
				temp->index = index;
				break ;
			}
			temp = temp ->next;
		}
		index++;
		current = current ->next;
	}
}

int	find_min_index(t_stack_node *stack)
{
	t_stack_node	*current;
	int				min_index;

	current = stack;
	min_index = current->index;
	while (current)
	{
		if (current->index < min_index)
			min_index = current->index;
		current = current->next;
	}
	return (min_index);
}

void    find_cheapest_node(t_stack_node *stack)
{
    
}