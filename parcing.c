/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parcing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 15:25:59 by yevkahar          #+#    #+#             */
/*   Updated: 2025/03/20 14:32:16 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack_node *parce_all(char **argv)
{
    t_stack_node *a;
    int i;

    a = NULL;
    i = 0;
    while (argv[i])
    {
        if (i == 0)
            lstnew(argv[i]);
        else
            lstadd_last(a, atoi(argv[i]));	
    }
    return (a);
}
