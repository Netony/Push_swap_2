#include "push_swap_new.h"

int	push_swap_main(t_vars *vars)
{
	int	sort;
	int	ret;

	ret = push_swap_sort_a(vars);
	if (ret == 0)
		return (0);
	ret = push_swap_move_all(vars, 3);
	if (ret < 0)
		return (-1);
	ret = push_swap_greedy(vars);
	if (ret < 0)
		return (-1);
	ret = push_swap_sort_a(vars);
	if (ret == 1)
		return (-1);
	return (0);
}

int	push_swap_move_all(t_vars *vars, int n)
{
	int	size;
	int	i;
	int	ret;

	size = ft_stsize(vars->a);
	if (size - n <= 0)
		return (0);
	i = 0;
	while (i++ < size - n)
	{
		ret = push_swap(vars, "pb");
		if (ret < 0)
			return (-1);
	}
	return (ret);
}
