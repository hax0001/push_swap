/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:49:39 by nait-bou          #+#    #+#             */
/*   Updated: 2024/07/17 12:13:41 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void find_min(t_stack **a, t_stack **b, int i)
{
	if (i == 0)
		pb(a, b, 0);
	else if (i == 1)
	{
		sa(a, 0);
		pb(a, b, 0);
	}
	else if (i == 2)
	{
		ra(a, 0);
		sa(a, 0);
		pb(a, b, 0);
	}
	else if (i == 3)
	{
		rra(a, 0);
		pb(a, b, 0);
	}
}

void sort_4(t_stack *a, t_stack *b, int n)
{
	int		d;
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = a;
	if (n == 1)
		d = 1;
	else
		d = 0;
	while (tmp->rank != d)
	{
		tmp = tmp->next;
		i++;
	}
	find_min(&a, &b, i);	
	sort_3(a);
	pa(&a, &b, 0);
}