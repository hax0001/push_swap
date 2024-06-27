/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 01:21:39 by nait-bou          #+#    #+#             */
/*   Updated: 2024/06/27 10:32:00 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void error(char **s, t_stack *a)
{
	write(2, "Error\n", 6);
	ft_freestr(s);
	free(s);
	ft_free(&a);
	exit(1);
}

void error2()
{
	write(2, "Error\n", 6);
	exit(1);
}