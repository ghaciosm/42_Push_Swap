#ifndef	PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdio.h>

typedef struct s_stack{
	int				content;
	struct s_stack	*next;
	int				index;
}	t_stack;

typedef struct	s_data
{
	int	tmp;
	int	count;
	int	*s;
	int	j;
}	t_data;

void	array_sort(int  **s, int cnt);
void	ft_error();
int		*ft_intjoin(int *a, t_data *data, int i);
int		nb_chk(t_data *data);
int		ft_atoi2(char   *av, t_data *data);
int		arg_check(char **av, t_stack **a, t_data *data);
t_stack	*ft_listnew(int tmp);
t_stack	*list_add_back(t_stack *tmp, t_stack *a);
void	stack_indexle(t_stack **a, t_data *data);

#endif
