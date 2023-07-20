#include "push_swap_new.h"

int	push_swap_data(t_vars *vars, t_data *data);

int	push_swap_greedy(t_vars *vars)
{
	int		ret;
	t_data	*data;

	ret = push_swap_move_all(vars, 3);
	if (ret < 0)
		return (-1);
	while (vars->b)
	{
		data = greedy(vars);
		ret = push_swap_data(vars, data);
		if (ret < 0)
			return (-1);
		ret = push_swap(vars, "pb");
		if (ret < 0)
			return (-1);
		free(data);
	}
	return (0);
}

int	push_swap_data(t_vars *vars, t_data *data)
{
	int			ret;
	int			i;
	const char	**cmd = {"ra", "rb", "rra", "rrb", "rr", "rrr"};

	i = 0;
	while (i < 6)
	{
		ret = push_swap_n_times(vars, cmd[i], data_get(cmd[i]);
		if (ret < 0)
			return (-1);
		i++;
	}
	return (0);
}
