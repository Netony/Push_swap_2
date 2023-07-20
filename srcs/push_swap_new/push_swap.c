#include "push_swap_new.h"

int	push_swap(t_vars *vars, char *s)
{
	t_list	*new;

	if (push_swap_operation(vars, s) < 0)
		return (-1);
	new = ft_lstnew(s);
	if (new == NULL)
		return (-1);
	ft_lstadd_back(&(vars->cmd), new);
	return (0);
}

int	push_swap_operation(t_vars *vars, char *s)
{
	if (ft_strcmp(s, "pa") == 0)
		return (pa(vars));
	else if (ft_strcmp(s, "pb") == 0)
		return (pb(vars));
	else if (ft_strcmp(s, "ra") == 0)
		return (ra(vars));
	else if (ft_strcmp(s, "rra") == 0)
		return (rra(vars));
	else if (ft_strcmp(s, "rb") == 0)
		return (rb(vars));
	else if (ft_strcmp(s, "rrb") == 0)
		return (rrb(vars));
	else if (ft_strcmp(s, "sa") == 0)
		return (sa(vars));
	else if (ft_strcmp(s, "sb") == 0)
		return (sb(vars));
	else if (ft_strcmp(s, "ss") == 0)
		return (ss(vars));
	else if (ft_strcmp(s, "rr") == 0)
		return (rr(vars));
	else if (ft_strcmp(s, "rrr") == 0)
		return (rrr(vars));
	else
		return (-1);
}
