/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:33:58 by yevkahar          #+#    #+#             */
/*   Updated: 2025/03/25 18:30:23 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_lenght(t_stack_node *stack)
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