/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 01:06:50 by nait-bou          #+#    #+#             */
/*   Updated: 2024/07/20 13:18:14 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int check_sort(t_stack *a)
{
	int		b;
	t_stack	*tmp;

	tmp = a;
	b = tmp->nbr;
	while (tmp)
	{
		if (b > tmp->nbr)
		{
			return (0);
		}
		b = tmp->nbr;
		tmp = tmp->next;
	}
	return (1);
}
void 	print_stack(t_stack *stack)
{
	t_stack *tmp = stack;

	while (tmp)
	{
		printf("%ld\n",tmp->nbr);
		tmp = tmp->next;
	}
}


int main(int ac, char **av)
{
	t_stack	*a;

	a = make_stack(ac, av);
	if (!a || check_dup(a))
	{
		ft_free(&a);
		error2();
	}
	if (check_sort(a) == 0)
		start_sort(&a, av);
	print_stack(a);
	ft_free(&a);
	return (0);
}