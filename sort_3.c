/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:45:49 by nait-bou          #+#    #+#             */
/*   Updated: 2024/07/16 12:52:35 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_3(t_stack *a)
{
	int A;
    int B;
    int C;

    A = a->nbr;
    B = a->next->nbr;
    C = a->next->next->nbr;
	printf("\nhhh\n");
    	if (A > B && B > C)
	{
		sa(&a, 0);
		rra(&a, 0);
	}
	else if (A > C && C > B)
		ra(&a, 0);
	else if (A > B)
		sa(&a, 0);
	else if (B > C && A > C)
		rra(&a, 0);
	else if (B > C)
	{
		sa(&a, 0);
		ra(&a, 0);
	}
}