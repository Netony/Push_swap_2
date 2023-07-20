#include "push_swap.h"
#include <stdio.h>
#include "stack.h"
#include "data.h"
#include "../srcs/test.h"

int	push_swap_test_test(t_vars *vars);
void	ft_put(char *s);
int		vars_init(t_vars *vars, int argc, char **argv);

int	main(int argc, char **argv)
{
	// t_vars	vars;
	t_data	*data;
	char	*test;
	int		i;
	int		size;

	data = data_new();
	i = 0;
	size = sizeof(t_data);
	test = (char *)data;
	while (i < size)
		test[i++];
	/*
	if (vars_init(&vars, argc, argv) < 0)
		return (-1);
	ra(&vars);
	push_swap_test_test(&vars);
	ft_putcmd(vars.cmd);
	*/
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
