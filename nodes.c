/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:45:51 by yevkahar          #+#    #+#             */
/*   Updated: 2025/03/27 15:33:34 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*create_node(int data)
{
	t_stack_node	*node;

	node = malloc(sizeof(t_stack_node));
	if (!node)
		return (NULL);
	node->data = data;
	node->prev = NULL;
	node->next = NULL;
	return (node);
}

t_stack_node	*insert_node(t_stack_node *head, int data, int target_index)
{
	t_stack_node	*new_node;
	t_stack_node	*current;
	int				i;

	new_node = create_node(data);
	if (!new_node)
		return (NULL);
	if (!head || target_index == 0) //if list is empty or target is 0
	{
		new_node->next = head;
		return (new_node);
	}
	current = head;
	i = 0;
	while (current->next && i < target_index - 1) //start from head and go to target
	{
		current = current->next;
		i++;
	}
	new_node->next = current->next;//new node to next
	current->next = new_node;//current to new
	new_node->prev = current;//new points back to current
	if (new_node->next) //update next nodes to prev
		new_node->next->prev = new_node;
	return (head);
}
