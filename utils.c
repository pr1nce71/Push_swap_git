#include "push_swap.h"

t_stack_node	*lstnew(void *data)
{
	t_stack_node	*new_node;

	new_node = malloc(sizeof(t_stack_node));
	if (!new_node)
		return (NULL);
	new_node ->data = data;
	new_node ->next = NULL;
	return (new_node);
}

t_stack_node	*lstlast(t_stack_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst ->next)
		lst = lst ->next;
	return (lst);
}

t_stack_node	*lstlast(t_stack_node *lst)
{
	if (!lst)
		return (NULL);
	while (lst ->next)
		lst = lst ->next;
	return (lst);
}

t_stack_node    *lstadd_last(t_stack_node **lst, t_stack_node *new)
{
    t_stack_node	*last;

    if (!new)
        return (NULL);
    if (!*lst)
    {
        *lst = new;
        return (*lst);
    }
    last = lstlast(*lst);
    last ->next = new;
    return (new);
}

int	atoi(const char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
	{
		str++;
	}
	if (*str == '-')
		sign *= -1;
	else if (*str == '+')
		str++;
	while (*str >= 48 && *str <= 57)
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
