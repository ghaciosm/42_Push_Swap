/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:25:51 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/08/27 18:25:57 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack **a)
{
	t_stack	*last;
	t_stack	*last2;

	last2 = *a;
	while (last2->next->next)
		last2 = last2->next;
	last = last2->next;
	last->next = *a;
	last2->next = NULL;
	*a = last;
	write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **b)
{
	t_stack	*last;
	t_stack	*last2;

	last2 = *b;
	while (last2->next->next)
		last2 = last2->next;
	last = last2->next;
	last->next = *b;
	last2->next = NULL;
	*b = last;
	write(1, "rrb\n", 4);
}
