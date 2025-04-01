/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:59:13 by yevkahar          #+#    #+#             */
/*   Updated: 2025/04/01 16:57:40 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
stack_b_cheapest_node = find_cheapest_node(stack_b);
while (stack_b_cheapest_node->data != stack_b->data)
{
	if (stack_b_cheapest_node->next->data == stack_b->data)
	{
		sb(&stack_b);
		break ;
	}
	if (stack_b_cheapest_node->sign == 1)
		rb(&stack_b);
	else
		rrb(&stack_b);
}
stack_a_target_node = find_target_node(stack_a, 
								stack_b_cheapest_node->target_number);
while (stack_a_target_node != stack_a)
{
	if (stack_a_target_node->next == stack_a)
	{
		sa(&stack_a);
		break ;
	}
	if (stack_a_target_node->sign == 1)
		ra(&stack_a);
	else
		rra(&stack_a);
}
pa(&stack_a, &stack_b);

stack_a return_target_node(stack_a stack_a, int data){
	stack_head = stack_a;
	target_node = NULL;
	
	while (stack_a)
	{
		if ((*stack_a)->data > data)
				&& (*stack_a)->data < target_node_data)
			target_node = *stack_a;
	}
}

stack_a->index = 0;
*/

int	main(int argc, char **av)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (1);
	if (!check_for_errors(av))
	{
		error_exit();
		return (1);
	}
	a = parse_all(av);
	if (!a)
	{
		error_exit();
		return (1);
	}
	free(a);
	free(b);
	return (0);
}
// errors through write(2, "Error\n", 6);