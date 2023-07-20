#include "lib.h"

int	ft_putcmd(t_list *cmd)
{
	int	ret;
	int	put;

	ret = 0;
	while (cmd)
	{
		put = ft_putstr_fd(cmd->content, 1);
		if (put < 0)
			return (-1);
		ret += put;
		if (cmd->next)
			put = ft_putchar_fd(' ', 1);
		else
			put = ft_putchar_fd('\n', 1);
		if (put < 0)
			return (-1);
		ret += put;
		cmd = cmd->next;
	}
	return (ret);
}
