#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include "Libft/libft.h"

void 	print_stack(t_stack *stack);
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
void    start_sort(t_stack **a, char **str);
void    get_rank(t_stack *a, char **str);
void	boble_sort(int **arr);
int    **creat_s(char **s);
void    sort_3(t_stack **a);
void    sort_4(t_stack **a, t_stack **b, int n);
void    sort_5(t_stack **a, t_stack **b);
void    big_sort(t_stack **a, t_stack **b);
void	ft_freestr2(int **lst);
void    find_min(t_stack **a, t_stack **b, int i);
void    find_min_5(t_stack **a, t_stack **b, int i);
void    push_to_b(t_stack **a, t_stack **b, int rang);
void    push_to_a(t_stack **a, t_stack **b);
int     find_index(t_stack **b);
void    final_a(t_stack **a, t_stack **b, int index);


#endif