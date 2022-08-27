/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:13:53 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/08/27 18:13:55 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*ft_intjoin(int *a, t_data *data, int i)
{
	int	*g;
	int	j;

	j = 0;
	g = (int *)malloc(sizeof(int) * i);
	if (!g)
		return (0);
	while (j < i - 1)
	{
		g[j] = a[j];
		j++;
	}
	g[j] = data->tmp;
	free (a);
	return (g);
}

int	nb_chk(t_data *data)
{
	static int	i;
	static int	*s;

	data->count++;
	i++;
	data->j = 0;
	if (i == 1)
	{
		s = (int *)malloc(sizeof(int) * 1);
		if (!s)
			return (0);
		s[0] = data->tmp;
	}
	else
	{
		while (data->j < i - 1)
		{
			if (s[data->j] == data->tmp)
				ft_error();
			data->j++;
		}
		s = ft_intjoin(s, data, i);
	}
	data->s = s;
	return (1);
}

int	ft_atoi2(char	*av, t_data *data)
{
	int		i;
	int		j;
	long	tmp;
	int		a;

	i = 0;
	j = 1;
	tmp = 0;
	while (av[i] == ' ' || (av[i] <= '\r' && av[i] >= '\t'))
		i++;
	if (av[i] == '+' || av[i] == '-')
	{
		if (av[i] == '-')
			j *= -1;
		i++;
	}
	while (av[i] >= '0' && av[i] <= '9')
	{
		tmp = tmp * 10 + av[i] - '0';
		if ((j == 1 && tmp > 2147483647) || (j == -1 && tmp > 2147483648))
			ft_error();
		i++;
	}
	return (tmp * j);
}	

int	arg_check(char **av, t_stack **a, t_data *data)
{
	int		i;
	int		j;
	t_stack	*new;

	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			if (!(ft_isdigit(av[i][j]) || ((av[i][j] == '-'
					|| av[i][j] == '+') && ft_isdigit(av[i][j + 1]))))
			{
				write(1, "Error\n", 6);
				exit (0);
			}
			j++;
		}
		data->tmp = ft_atoi2(av[i], data);
		nb_chk(data);
		new = ft_listnew(data->tmp);
		*a = list_add_back(new, *a);
		i++;
	}
	return (1);
}
