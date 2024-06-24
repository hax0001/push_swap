/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 01:11:43 by nait-bou          #+#    #+#             */
/*   Updated: 2024/06/24 13:27:44 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ne_atoi(char *str)
{
	int s;
	int r;

	s = 1;
	r = 0;
	while (*str == " " || (*str >= 9 && *str <= 13))
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
	s = ft_split(str, " ");
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

	a = NULL;
	if (ac < 2)
		error();
	if (ac == 2)
		a = sub_mak_stack(av[1]);
	else
		
}