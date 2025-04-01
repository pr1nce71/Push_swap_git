/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:02:28 by yevkahar          #+#    #+#             */
/*   Updated: 2025/04/01 16:00:34 by yevkahar         ###   ########.fr       */
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

static void	set_smallest_index(t_stack_node *stack, int smallest, int index)
{
	t_stack_node	*temp;

	temp = stack;
	while (temp)
	{
		if (temp->data == smallest && temp->index == -1)
		{
			temp->index = index;
			break ;
		}
		temp = temp->next;
	}
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
			if (temp->data < smallest && temp->index == -1)
				smallest = temp->data;
			temp = temp->next;
		}
		set_smallest_index(stack, smallest, index);
		index++;
		current = current->next;
	}
}
//set index to each number in stack

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

void	find_cheapest_node(t_stack_node *stack)
{
	t_stack_node	*current;
	t_stack_node	*cheapest;
	int				lowest_cost;

	if (!stack)
		return ;
	current = stack;
	cheapest = stack;
	lowest_cost = INT_MAX;
	while (current)
	{
		current->cheapest = 0;
		if (current->final_cost < lowest_cost)
		{
			lowest_cost = current->final_cost;
			cheapest = current;
		}
		current = current->next;
	}
	cheapest->cheapest = 1;
}
