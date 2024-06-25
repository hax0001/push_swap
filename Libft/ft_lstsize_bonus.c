/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 03:25:50 by nait-bou          #+#    #+#             */
/*   Updated: 2024/06/25 11:16:50 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_stack *lst)
{
	t_stack	*s;
	int		i;

	s = lst;
	i = 0;
	if (!lst)
		return (0);
	while (s != NULL)
	{
		i++;
		s = s -> next;
	}
	return (i);
}
