/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:25:59 by yevkahar          #+#    #+#             */
/*   Updated: 2025/03/21 16:04:35 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node	*parse_all(char **argv)
{
	t_stack_node	*a;
	int				i;

	i = 0;
	a = NULL;
	while (argv[i])
	{
		if (i == 0)
			lstnew(argv[i]);
		else
			lst_add_back(a, atoi(argv[i]));
	}
	return (a);
}
