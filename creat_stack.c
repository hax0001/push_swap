/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 01:11:43 by nait-bou          #+#    #+#             */
/*   Updated: 2024/06/25 12:57:00 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_dup(t_stack *a)
{
	t_stack	*tmp;
	
	 while (a)
	 {
		tmp = a->next;
		while (tmp)
		{
			if (a->nbr == tmp->nbr)
				return (1);
			tmp = tmp->next;
		}
		a = a->next;
	 }
	 return (0);
}

int new_atoi(char *str)
{
	int s;
	int r;

	s = 1;
	r = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		s = (-1);
		str++;
	}
	if (*str == '+')
		str++;
	while (*str)
	{
		if (!ft_isdigit(*str))
			error();
		r = r * 10 + (*str + 48); 
	}
	if ((r * s) > 2147483647 || (r * s) < -2147483648)
		error();
	return (r * s);
}

t_stack *sub_mak_stack(char *str)
{
	t_stack *a;
	char	**s;
	int		i;
	int		j;

	i = 0;
	a = NULL;
	s = ft_split(str, 32);
	while (s[i])
	{
		j = new_atoi(s[i]);
		ft_lstadd_back(&a, ft_lstnew(j));
		i++;
	}
	free_array(s, i);
	return (a);
}

t_stack *make_stack(int ac, char **av)
{
	int		i;
	int		j;
	t_stack	*a;

	i = 1;
	a = NULL;
	if (ac < 2)
		error();
	if (ac == 2)
		a = sub_mak_stack(av[1]);
	else
		while (i < ac)
		{
			j = ne_atoi(av[i]);
			ft_lstadd_back(&a, ft_lstnew(j));
			i++;
		}
	return (a);
}