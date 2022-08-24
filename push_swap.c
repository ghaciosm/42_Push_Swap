/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:21:08 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/08/24 17:51:36 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	array_sort(int	**s, int cnt)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	j = 1;
	while (i < cnt)
	{
		 j = i + 1;
		while (j < cnt)
		{
			if ((*s)[i] > (*s)[j])
			{
				tmp = (*s)[i];
				(*s)[i] = (*s)[j];
				(*s)[j] = tmp;

			}
			j++;
		}
		i++;
	}	
	return;
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
		array_sort(&data->s, data->count);
		stack_indexle(&a, data);
	}
}
