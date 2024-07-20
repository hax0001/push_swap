/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:51:22 by nait-bou          #+#    #+#             */
/*   Updated: 2024/07/20 13:11:18 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void find_min_5(t_stack **a, t_stack **b, int i)
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
		rra(a, 0);
		pb(a, b, 0);
	}
    else if (i == 4)
	{
		rra(a, 0);
		pb(a, b, 0);
	}
}

void sort_5(t_stack **a, t_stack **b)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *a;
	while (tmp->rank != 0)
	{
		tmp = tmp->next;
		i++;
	}
	find_min_5(a, b, i);	
	sort_4(a, b, 1);
	pa(a, b, 0);
}