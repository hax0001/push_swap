#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include "Libft/libft.h"

t_stack *make_stack(int ac, char **av);
t_stack *sub_mak_stack(char *str);
void error();
int ne_atoi(char *str);
int check_dup(t_stack *a);

#endif