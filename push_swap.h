/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:02:52 by yevkahar          #+#    #+#             */
/*   Updated: 2025/03/20 14:50:50 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h> // INT_MAX, INT_MIN
#include <stdbool.h> // bool, true, false

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct	s_stack
{
	int					data;
	struct s_stack		*prev;
	struct s_stack		*next;
	struct s_stack		*ms;
	struct s_stack		*next;
}				t_stack_node;

// main
// str 
#endif