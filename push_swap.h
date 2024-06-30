#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include "Libft/libft.h"

t_stack *make_stack(int ac, char **av);
t_stack *sub_mak_stack(char *str, t_stack *a);
long new_atoi(char *str, char **s, t_stack *a);
int check_dup(t_stack *a);
void	ft_freestr(char **lst);
void	ft_free(t_stack **lst);
void    error(char **s, t_stack *a);
void    error2();
void    sa(t_stack **a, int j);
void    sa(t_stack **b, int j);
void    ss(t_stack **a, t_stack **b, int j);
void    pa(t_stack **a, t_stack **b, int j);
void    pb(t_stack **a, t_stack **b, int j);
void    ra(t_stack **a, int j);
void    rb(t_stack **b, int j);
void    rr(t_stack **a, t_stack **b, int j);
void    rra(t_stack **a, int j);
void    rrb(t_stack **b, int j);
void    rrr(t_stack **a, t_stack **b, int j);





#endif