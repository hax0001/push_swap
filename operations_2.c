/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 12:18:46 by nait-bou          #+#    #+#             */
/*   Updated: 2024/06/29 16:49:26 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void pa(t_stack **a, t_stack **b, int j)
{
	if (!*b)
		return;
	t_stack	*tmp;

	tmp = *a;
	*a = *b;
	*b = (*b)->next;
	(*a)->next = tmp;
	 if (j == 0)
		write(1, "pa\n", 3);
}

void pb(t_stack **a, t_stack **b, int j)
{
	if (!*a)
		return;
	t_stack	*tmp;

	tmp = *b;
	*b = *a;
	*a = (*a)->next;
	(*b)->next = tmp;
	 if (j == 0)
		write(1, "pb\n", 3);
}
