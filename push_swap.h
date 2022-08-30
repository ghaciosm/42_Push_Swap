/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghaciosm <ghaciosm@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/27 18:29:11 by ghaciosm          #+#    #+#             */
/*   Updated: 2022/08/27 18:43:14 by ghaciosm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>

typedef struct s_stack
{
	int				content;
	struct s_stack	*next;
	int				index;
}	t_stack;

typedef struct s_data
{
	int	tmp;
	int	count;
	int	*s;
	int	j;
	int	a_cnt;
	int	b_cnt;
}	t_data;

t_stack	*ft_listnew(int tmp);
t_stack	*list_add_back(t_stack *tmp, t_stack *a);
void	array_sort(int **s, int cnt);
void	ft_error(void);
int		*ft_intjoin(int *a, t_data *data, int i);
int		nb_chk(t_data *data);
int		ft_atoi2(char *av);
int		arg_check(char **av, t_stack **a, t_data *data);
void	stack_indexle(t_stack **a, t_data *data);
void	ft_pa(t_stack **a, t_stack **b, t_data *data);
void	ft_pb(t_stack **a, t_stack **b, t_data *data);
void	ft_rra(t_stack **a);
void	ft_rrb(t_stack **b);
void	ft_ra(t_stack **a);
void	ft_rb(t_stack **b);
void	ft_sa(t_stack **a);
void	ft_sb(t_stack **b);
int		is_sorted(t_stack *a);
void	algorithm_5(t_stack **a, t_stack **b, t_data *data);
void	algorithm_3(t_stack **a);
void	split(char **av, t_stack **a, t_data *data);

#endif
