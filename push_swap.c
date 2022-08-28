/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:21:08 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/08/28 12:02:33 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algorithm_3(t_stack **a)
{
	if (is_sorted(*a))
		return ;
	if (((*a)->index > ((*a)->next->index && (*a)->next->next->index))
		&& ((*a)->next->index > (*a)->next->next->index))
	{
		ft_ra(a);
		ft_sa(a);
	}
	else if (((*a)->index < ((*a)->next->index && (*a)->next->next->index))
		&& ((*a)->next->index > (*a)->next->next->index))
	{
		ft_sa(a);
		ft_ra(a);
	}
	else if (((*a)->index < (*a)->next->index)
		&& ((*a)->index > (*a)->next->next->index))
		ft_rra(a);
	else if (((*a)->index > (*a)->next->next->index)
		&& ((*a)->next->index < (*a)->next->next->index))
		ft_ra(a);
	else if (((*a)->index > (*a)->next->index)
		&& ((*a)->index < (*a)->next->next->index))
		ft_sa(a);
}

int	is_sorted(t_stack *a)
{
	while (a->next)
	{
		if (a->content > a->next->content)
			return (0);
		a = a->next;
	}
	return (1);
}

void	begin_radix(t_stack **a, t_stack **b, t_data *data)
{
	int	i;
	int	j;
	int	ac;

	i = 0;
	while (!is_sorted(*a))
	{
		ac = data->a_cnt;
		j = 0;
		while (j < ac)
		{
			if (((*a)->index >> i & 1) != 1)
				ft_pb(a, b, data);
			else
				ft_ra(a);
			j++;
		}
		while (data->b_cnt)
			ft_pa(a, b, data);
		i++;
	}
}

void	begin(t_stack **a, t_stack **b, t_data *data)
{
	if (is_sorted(*a))
		return ;
	if (data->a_cnt == 3)
		algorithm_3(a);
	if (data->a_cnt > 1)
		begin_radix(a, b, data);
}

int	main(int ac, char **av)
{
	t_data	*data;
	t_stack	*a;
	t_stack	*b;

	a = NULL;
	b = NULL;
	data = malloc(sizeof(t_data) * 1);
	data->count = 0;
	if (ac >= 2)
	{
		arg_check(av, &a, data);
		data->a_cnt = data->count;
		data->b_cnt = 0;
		array_sort(&data->s, data->count);
		stack_indexle(&a, data);
		begin(&a, &b, data);
	}
}
