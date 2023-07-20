#include "push_swap.h"
#include <stdio.h>
#include "stack.h"
#include "data.h"
#include "../srcs/test.h"

int		push_swap_test_test(t_vars *vars);
int		vars_init(t_vars *vars, int argc, char **argv);

int	main(int argc, char **argv)
{
	t_vars	vars;

	if (vars_init(&vars, argc, argv) < 0)
		return (-1);
	push_swap_main
	push_swap_test_test(&vars);
	ft_putcmd(vars.cmd);
}

void	ft_lstinsert_back(t_list *prev, t_list *new)
{
	t_list	*next;

	next = prev->next;
	prev->next = new;
	ft_lstlast(new)->next = next;
}

void	ft_lstswap(t_list *n1, t_list *n2)
{
	void	*temp;

	temp = n1->content;
	n1->content = n2->content;
	n2->content = temp;
}

int	vars_init(t_vars *vars, int argc, char **argv)
{
	vars->a = parse_argv(argc, argv);
	if (vars->a == NULL)
		return (-1);
	vars->b = NULL;
	vars->cmd = NULL;
	return (0);
}
