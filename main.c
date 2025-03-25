/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:59:13 by yevkahar          #+#    #+#             */
/*   Updated: 2025/03/25 13:34:38 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// For Parser:
// 1. Check the arguments for errors.
// t_stack_node	*parser(char **av)
// {
// 	t_stack_node *a = NULL;
// 	int i = 0;

// 	while (av[i])
// 	{
// 		if (i == 0)
// 			lstnew(av[i]);
// 		else
// 			lst_add_back(a, atoi(av[i]));	
// 	}
// 	return (a);
// }
int	main(int argc, char **av)
{
	t_stack_node	*a;
	t_stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc < 2)
		return (1);
	if (!check_for_errors(av));
		error_exit();
	a = parse_all(av);
	if (!a)
		error_exit();
	return (0);
}
// errors through write(2, "Error\n", 6);