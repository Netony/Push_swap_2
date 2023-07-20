int	push_swap_greedy_main(t_vars *vars)
{
	int		ret;
	t_data	*data;

	ret = push_swap_move_all(vars, 3);
	if (ret < 0)
		return (-1);
	while (vars->b)
	{
		
	}
}

int	push_swap_data(t_vars *vars, t_data *data)
{
	int			ret;
	int			i;
	const char	**cmd = {"ra", "rb", "rra", "rrb", "rr", "rrr"};

	i = 0;
	while (i < 6)
	{
		ret = push_swap_n(vars, cmd[i], data->ra);
		if (ret < 0)
			return (-1);
		i++;
	}
	return (0);
}

int	push_swap_n(t_vars *vars, char *s, int n)
{
	int	ret;
	int	i;

	i = 0;
	while (i < n)
	{
		ret = push_swap(vars, s);
		if (ret < 0)
			return (-1);
		i++;
	}
	return (0);
}
