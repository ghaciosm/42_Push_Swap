/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:16:02 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/08/27 18:16:22 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack **a)
{
	t_stack	*first;
	t_stack	*last;

	first = *a;
	last = *a;
	while (last -> next)
		last = last->next;
	last->next = first;
	*a = (*a)->next;
	first->next = NULL;
	write(1, "ra\n", 3);
}

void	ft_rb(t_stack **b)
{
	t_stack	*first;
	t_stack	*last;

	first = *b;
	last = *b;
	while (last -> next)
		last = last->next;
	last->next = first;
	*b = (*b)->next;
	first->next = NULL;
	write(1, "rb\n", 3);
}
