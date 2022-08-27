/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_px.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:15:05 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/08/27 18:15:09 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack **a, t_stack **b, t_data *data)
{
	t_stack	*first_b;

	first_b = *b;
	*b = (*b)->next;
	first_b->next = *a;
	*a = first_b;
	data->a_cnt++;
	data->b_cnt--;
	write(1, "pa\n", 3);
}

void	ft_pb(t_stack **a, t_stack **b, t_data *data)
{
	t_stack	*first_a;

	first_a = *a;
	*a = (*a)->next;
	first_a->next = *b;
	*b = first_a;
	data->a_cnt--;
	data->b_cnt++;
	write(1, "pb\n", 3);
}
