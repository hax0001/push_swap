/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:45:49 by nait-bou          #+#    #+#             */
/*   Updated: 2024/07/20 21:18:14 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(t_stack **a)
{
	int	r;
	int	s;
	int	t;

	r = (*a)->nbr;
	s = (*a)->next->nbr;
	t = (*a)->next->next->nbr;
	if (r > s && s > t)
	{
		sa(a, 0);
		rra(a, 0);
	}
	else if (r > t && t > s)
		ra(a, 0);
	else if (r > s)
		sa(a, 0);
	else if (s > t && r > t)
		rra(a, 0);
	else if (s > t)
	{
		sa(a, 0);
		ra(a, 0);
	}
}
