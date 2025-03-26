/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:33:58 by yevkahar          #+#    #+#             */
/*   Updated: 2025/03/26 16:44:44 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
				break;
			}
			temp = temp ->next;
		}
		index++;
		current = current ->next;
	}
}

void	calculate_fcost(t_stack_node *stack)
{
	t_stack_node	*current;
	int				size;
	int				pivot;

	size = stack_lenght(stack);
	pivot = size / 2;
	current = stack;
	while (current)
	{
		if (current->index <= pivot)
			current->primary_cost = current->index;
		else
			current->primary_cost = size - current->index;
		current = current->next;
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

void	find_target_position(t_stack_node *stack_a, t_stack_node *stack_b)
{
	t_stack_node	*current_a;
	t_stack_node	*current_b;
	int				target_pos;
	int				target_index;

	current_b = stack_b;
	while (current_b)
	{
		target_index = INT_MAX;
		current_a = stack_a;
		while (current_a)
		{
			if (current_a->index > current_b->index 
				&& current_a->index < target_index)
			{
				target_index = current_a->index;
				target_pos = current_a->index;
			}
			current_a = current_a->next;
		}
		if (target_index == INT_MAX)
			current_b->target_number = find_min_index(stack_a);
		else
			current_b->target_number = target_pos;
		current_b = current_b->next;
	}
}
