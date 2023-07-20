#include "push_swap_new.h"

int	min_index(t_stack *stack);
int	unsorted_index(t_stack *stack);

int	push_swap_sort_a(t_vars *vars, char *a)
{
	int		sort;
	int		index;
	t_stack	*stack;

	if (ft_strcmp("a", a) == 0)
		stack = vars->a;
	else if (ft_strcmp("b", a) == 0)
		stack = vars->b;
	sort = stack_issorted(stack);
	if (sort == 1)
		index = min_index(stack); 
	else if (sort == 2)
		index = unsorted_index(stack);
	else
		return (1);
	return (push_swap_rotate_min(vars, "ra", "rra", index));
}

int	min_index(t_stack *stack)
{
	int	min;
	int	min_index;
	int	i;
	int	size;

	min = INT_MAX;
	min_index = 0;
	size = ft_stsize(stack);
	i = 0;
	while (i < size)
	{
		if (min > stack->data)
		{
			min = stack->data;
			min_index = i;
		}
		i++;
	}
	return (i);
}

int	unsorted_index(t_stack *stack)
{
	int	i;
	int	size;
	int	min;

	size = ft_stsize(stack);
	min = ft_stmin(stack);
	i = 0;
	while (i < size)
	{
		if (stack->data > stack->next->data)
		{
			if (stack->next->data != min)
				return (i);
		}
		i++;
		stack = stack->next;
	}
	return (-1);
}
