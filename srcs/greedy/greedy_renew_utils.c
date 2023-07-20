#include "data.h"
#include "lib.h"

int	ft_min_4(int a, int b, int c, int d)
{
	return (ft_min(ft_min(a, b), ft_min(c, d)));
}

void	data_bzero(t_data *data)
{
	ft_bzero(data, sizeof(t_data));
}

t_data	*data_new(void)
{
	t_data	*data;

	data = (t_data *)malloc(sizeof(t_data));
	data_bzero(data);
	data->min = INT_MAX;
	return (data);
}
