/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yevkahar <yevkahar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 14:02:52 by yevkahar          #+#    #+#             */
/*   Updated: 2025/03/25 13:52:33 by yevkahar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h> // INT_MAX, INT_MIN
# include <stdbool.h> // bool, true, false

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

typedef struct s_stack
{
	int					data;
	struct s_stack		*ms;
	struct s_stack		*prev;
	struct s_stack		*next;
}				t_stack_node;
//nodes
t_stack_node	*lstnew(int data);
t_stack_node	*create_node(int data);
t_stack_node	*lstlast(t_stack_node *lst);
t_stack_node	*lstadd_last(t_stack_node **lst, t_stack_node *new);
t_stack_node	*insert_node(t_stack_node *head, int data, int target_index);
//errors
int				is_digit(int c);
int				valid_int(char *str);
int				check_empty(char *str);
int				check_format(char *str);
int				check_for_errors(char **av);
int				check_signs(char *str, int *i);
int				has_duplicate(char **av, int current);
void			error_exit(void);
//gnl
char			*edit_line(char *str);
char			*print_line(char *str);
char			*get_next_line(int fd);
char			*read_line(int fd, char *str);
//gnl utils
size_t			my_strlen(const char *s);
char			*my_strdup_gnl(const char *s);
char			*my_strchr(const char *s, int c);
char			*my_strjoin(char *s1, const char *s2);
char			*my_strcpy(char *s1, const char *s2);
//parser
t_stack_node	*parse_all(char **argv);
// str 
#endif