/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_state.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 15:17:31 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/08/24 17:56:14 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_listnew(int	tmp)
{
    	t_stack	*ptr;

	ptr = (t_stack *)malloc(sizeof(t_stack));
    	if (!ptr)
	return (0);
	ptr->next = NULL;
	ptr->content = tmp;
	return (ptr);
}

t_stack	*list_add_back(t_stack *new, t_stack *a)
{	
	t_stack	*ptr;
	ptr = a;
	if (a == NULL)
		return (new);
	while (a->next != NULL)
		a = a->next;
	a->next = new;
	return (ptr);
}

void	stack_indexle(t_stack **a, t_data *data)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	while (i < data->count)
	{
		tmp = *a;
		while (tmp != NULL)
		{
			if (data->s[i] == tmp->content)
				tmp->index = i;
			printf("%d\n", tmp->index);
			tmp = tmp->next;
		}
		i++;
	}
	printf("\\\\%d\n", data->s[2]);
}
