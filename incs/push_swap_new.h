#ifndef PUSH_SWAP_NEW_H
# define PUSH_SWAP_NEW_H

# include "lib.h"
# include "stack.h"

typedef struct s_vars
{
	t_stack	*a;
	t_stack	*b;
	t_list	*cmd;
}	t_vars;

t_stack	*parse_argv(int argc, char **argv);
int		vars_init(t_vars *vars, int argc, char **argv);
char	*cmd_to_char(t_list *lst);

t_data	*greedy(t_vars *vars);

int		push_swap_main(t_vars *vars);

int		push_swap(t_vars *vars, char *s);
int		push_swap_n_times(t_vars *vars, char *s, int n);
int		push_swap_min_rotate(t_vars *vars, int index, char *ra, char *rra);

#endif
/*
int		ft_stprint(t_stack *stack);
int		push_swap_test(t_vars *vars);
int		ft_cmd_lst_print(t_list *lst);
*/
