/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:16:27 by yevkahar          #+#    #+#             */
/*   Updated: 2025/04/01 16:20:11 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_to_b(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*current;
	int				size;
	int				pivot;
	int				pushed;

	size = stack_lenght(*a);
	pivot = size / 2;
	pushed = 0;
	current = *a;
	while (size - pivot > 3 && current)
	{
		if (current->index <= pivot)
		{
			pb(a, b);
			pushed++;
		}
		else
			ra(a);
		current = *a;
	}
	while (stack_lenght(*a) > 3)
		pb(a, b);
}

void	find_target_position(t_stack_node *stack_a, t_stack_node *stack_b)
{
	t_stack_node	*current_b;

	current_b = stack_b;
	while (current_b)
	{
		current_b->target_number = find_target_index(stack_a, current_b->index);
		current_b = current_b->next;
	}
}
