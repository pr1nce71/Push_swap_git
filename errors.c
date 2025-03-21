/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 15:34:23 by yevkahar          #+#    #+#             */
/*   Updated: 2025/03/21 16:00:49 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_digit(int c)
{
	return (c >= '0' && c <= '9');
}

int	has_duplicate(char **av, int current)
{
	int	j;

	j = 1;
	while (av[j])
	{
		if (current != j && atoi(av[current]) == atoi(av[j]))
			return (1);
		j++;
	}
	return (0);
}

int	valid_int(char *str)
{
	long	num;

	num = atoi(str);
	return (num >= INT_MIN && num <= INT_MAX);
}

int	check_for_errors(char **av)
{
	int	i;
	int	j;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (j == 0 && (av[i][j] == '-' || av[i][j] == '+'))
				j++;
			if (!is_digit(av[i][j]))
				return (0);
			j++;
		}
		if (has_duplicate(av, i))
			return (0);
		if (!valid_int(av[i]))
			return (0);
	}
	return (1);
}

void	error_exit(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
