int	push_swap_main(t_vars *vars)
{
	
}

int	push_swap_sorted(t_vars *vars)
{
	int	sort;

	sort = stack_issorted(vars->a);
	if (sort == 1)
	{
		find_index
	}
	else if (sort == 2)
	{
		find_unsorted
	}
	else
		return (1);
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


