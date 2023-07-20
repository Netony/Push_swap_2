#include "push_swap.h"
#include "data.h"

static int	data_ra(t_vars *vars, int ra_count);
static int	data_rb(t_vars *vars, int rb_count);

int	data_operation(t_vars *vars, t_data *data)
{
	data_rb(vars, data->rb);
	data_ra(vars, data->ra);
	return (0);
}

static int	data_ra(t_vars *vars, int ra_count)
{
	while (ra_count)
	{
		if (ra_count > 0)
		{
			ra(vars);
			ra_count--;
		}
		else
		{
			rra(vars);
			ra_count++;
		}
	}
	return (0);
}

static int	data_rb(t_vars *vars, int rb_count)
{
	while (rb_count)
	{
		if (rb_count > 0)
		{
			rb(vars);
			rb_count--;
		}
		else
		{
			rrb(vars);
			rb_count++;
		}
	}
	return (0);
}
