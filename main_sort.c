/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 18:16:27 by yevkahar          #+#    #+#             */
/*   Updated: 2025/03/27 16:00:06 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	calculate_last_cost(t_stack_node *stack_b)
{
	t_stack_node	*current;
	int				final_cost;

	current = stack_b;
	while (current)
	{
		if (current->primary_cost >= 0 && current->final_cost >= 0)
			final_cost = max(current->primary_cost, current->final_cost);
		else if (current->primary_cost < 0 && current->final_cost < 0)
			final_cost = max(pos(current->primary_cost),
					pos(current->final_cost));
		else
			final_cost = pos(current->primary_cost) + pos(current->final_cost);
		current->final_cost = final_cost;
		current = current->next;
	}
}

static int	max(int a, int b)
{
	if (a < b)
		return (a);
	return (b);
}

static int	pos(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
