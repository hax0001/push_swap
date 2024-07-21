/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 01:11:43 by nait-bou          #+#    #+#             */
/*   Updated: 2024/07/21 13:07:45 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_dup(t_stack *a)
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

void	sub_atoi(char c, char **s, t_stack *a)
{
	if (!ft_isdigit(c))
		error(s, a);
}

long	new_atoi(char *str, char **s, t_stack *a)
{
	int		c;
	long	r;

	c = 1;
	r = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if ((*str == '-' && *(str + 1) == '\0') || (*str == '+' && *(str
				+ 1) == '\0'))
		error(s, a);
	if (*str == '-')
	{
		c = (-1);
		str++;
	}
	if (*str == '+')
		str++;
	while (*str)
	{
		sub_atoi(*str, s, a);
		r = r * 10 + *(str++) - '0';
	}
	if ((r * c) > 2147483647 || (r * c) < -2147483648)
		error(s, a);
	return (r * c);
}

t_stack	*sub_mak_stack(char *str, t_stack *a)
{
	char	**s;
	int		i;
	long	j;

	i = 0;
	s = ft_split(str, 32);
	while (s[i])
	{
		j = new_atoi(s[i], s, a);
		ft_lstadd_back(&a, ft_lstnew(j));
		i++;
	}
	ft_freestr(s);
	free(s);
	return (a);
}

t_stack	*make_stack(int ac, char **av)
{
	int		i;
	int		j;
	t_stack	*a;

	i = 1;
	a = NULL;
	if (ac < 2)
	{
		exit(0);
	}
	else if (ac == 2)
	{
		a = sub_mak_stack(av[1], a);
	}
	else
		a = make_it(ac, a, av);
	return (a);
}
