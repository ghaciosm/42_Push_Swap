/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:32:41 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/08/28 14:33:02 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	algorithm_5(t_stack **a, t_stack **b, t_data *data)
{
	int	i;

	i = 2;
	while (data -> a_cnt > 3)
	{
		if ((*a)-> index < 2)
			ft_pb(a, b, data);
		else
			ft_ra(a);
	}
	algorithm_3(a);
	if ((*b)-> index < (*b)-> next -> index)
		ft_sb(b);
	while (i)
	{
		i--;
		ft_pa(a, b, data);
	}
}

void	algorithm_3(t_stack **a)
{
	if (is_sorted(*a))
		return ;
	if (((*a)->index > (*a)->next->index)
		&& ((*a)->next->index > (*a)->next->next->index))
	{
		ft_ra(a);
		ft_sa(a);
	}
	else if (((*a)->index < (*a)->next->next->index)
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
