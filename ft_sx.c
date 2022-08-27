/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sx.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:27:01 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/08/27 18:27:04 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stack **a)
{
	t_stack	*first;

	first = *a;
	*a = (*a)->next;
	first->next = (*a)->next;
	(*a)->next = first;
	write(1, "sa\n", 3);
}

void	ft_sb(t_stack **b)
{
	t_stack	*first;

	first = *b;
	*b = (*b)->next;
	first->next = (*b)->next;
	(*b)->next = first;
	write(1, "sb\n", 3);
}
