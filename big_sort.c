/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:54:01 by nait-bou          #+#    #+#             */
/*   Updated: 2024/07/20 13:17:01 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void final_a(t_stack **a, t_stack **b, int index)
{
	t_stack	*tmp_a;
	t_stack	*tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	if (index <= ft_lstsize(*b) / 2)
	{
		while (index > 0)
		{
			rb(b, 0);
			index--;
		}
	}
	else
	{
		index = ft_lstsize(*b) - index;
		while (index != 0)
		{
			rrb(b, 0);
			index--;
		}
	}
	pa(a, b, 0);
}

int find_index(t_stack **b)
{
    int		max_value;
	int		index;
	int		max_index;
	t_stack	*current;

	max_index = 0;
	index = 0;
	max_value = (*b)->nbr;
	current = (*b)->next;
	while (current != NULL)
	{
		index++;
		if (current->nbr > max_value)
		{
			max_value = current->nbr;
			max_index = index;
		}
		current = current->next;
	}
	return (max_index);
}

void push_to_a(t_stack **a, t_stack **b)
{
	int		index;
	t_stack	*tmp_a;
	t_stack	*tmp_b;

	tmp_a = *a;
	tmp_b = *b;
	while (ft_lstsize(*b) != 0)
	{
		index = find_index(b);
		final_a(a, b, index);
	}
}

void push_to_b(t_stack **a, t_stack **b, int range)
{
	int		i;
	t_stack	*tmp;

	i = 0;
	tmp = *a;
	while (ft_lstsize(*a) != 0)
	{
		if (tmp->rank <= range && tmp->rank >= i)
		{
			pb(a, b, 0);
			i++;
			range++;
		}
		else if (tmp->rank < i)
		{
			pb(a, b, 0);
			rb(b, 0);
			i++;
			range++;
		}
		else
			ra(a, 0);
		tmp = *a;
    }
}

void big_sort(t_stack **a, t_stack **b)
{
	int     rang;
    t_stack *tmp_a;
    t_stack *tmp_b;
    
    tmp_a = *a;
    tmp_b = *b;
    if (ft_lstsize(*a) <= 250)
        rang = 15;
    else
        rang = 30;
    push_to_b(a, b, rang);
    push_to_a(a, b);
}