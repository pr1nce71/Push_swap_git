/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:02:55 by yevkahar          #+#    #+#             */
/*   Updated: 2025/03/25 14:08:03 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack_node **dst, t_stack_node **src)
{
	t_stack_node	*temp;

	if (!*src)
		return ;
	temp = *src;
	*src = (*src)->next;
	if (*src)
		(*src)->prev = NULL;
	temp->next = NULL;
	temp->prev = NULL;
	if (!*dst)
		*dst = temp;
	else
	{
		temp->next = *dst;
		(*dst)->prev = temp;
		*dst = temp;
	}
}
