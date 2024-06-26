/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 01:06:50 by nait-bou          #+#    #+#             */
/*   Updated: 2024/06/26 13:04:09 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int ac, char **av)
{
	t_stack	*a;

	a = make_stack(ac, av);
	if (!a || check_dup(a))
	{
		ft_free(&a);
		error();
	}
	while (a)
	{
		printf("\n %ld \n",a->nbr);
		a = a->next; 
	}
	ft_free(&a);
	return (0);
}