#ifndef PUSH_SWAP.H
# define PUSH_SWAP.H

# include <unistd.h>
# include "./Libft/libft.h"

typedef struct s_stack
{
	long			nbr;
	struct s_stack	*next;
}	t_stack;


t_stack *make_stack(int ac, char **av);
t_stack *sub_mak_stack(char *str);
void error();



#endif