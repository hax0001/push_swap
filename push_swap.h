#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include "Libft/libft.h"

t_stack *make_stack(int ac, char **av);
t_stack *sub_mak_stack(char *str, t_stack *a);
void error();
long ne_atoi(char *str);
int check_dup(t_stack *a);
void	ft_freestr(char **lst);
void	ft_free(t_stack **lst);


#endif