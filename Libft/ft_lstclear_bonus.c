/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 23:50:47 by nait-bou          #+#    #+#             */
/*   Updated: 2024/06/26 12:06:01 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_lstclear(t_stack **lst)
{
	t_stack	*d;
	t_stack	*t;

	d = *lst;
	while (d)
	{
		t = d -> next;
		ft_lstdelone(d);
		d = t;
	}
	*lst = NULL;
}
