/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 15:02:28 by yevkahar          #+#    #+#             */
/*   Updated: 2025/04/01 16:42:57 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_length(t_stack_node *stack)
{
	int	i;

	if (!stack)
		return (0);
	i = 0;
	while (stack)
	{
		stack = stack->next;
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

static int	find_smallest_number(t_stack_node *stack)
{
	t_stack_node	*temp;
	int				smallest;

	smallest = INT_MAX;
	temp = stack;
	while (temp)
	{
		if (temp->data < smallest && temp->index == -1)
			smallest = temp->data;
		temp = temp->next;
	}
	return (smallest);
}

void	set_index(t_stack_node *stack)
{
	t_stack_node	*current;
	int				index;
	int				smallest;

	if (!stack)
		return ;
	index = 0;
	current = stack;
	while (current)
	{
		smallest = find_smallest_number(stack);
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

	if (!stack)
		return (0);
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
