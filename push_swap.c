/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 01:06:50 by nait-bou          #+#    #+#             */
/*   Updated: 2024/06/27 10:27:57 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*n;

	a = make_stack(ac, av);
	if (!a || check_dup(a))
	{
		ft_free(&a);
		error2();
	}
	n = a;
	while (n)
	{
		printf("\n %ld \n",n->nbr);
		n = n->next; 
	}
	ft_free(&a);
	return (0);
}