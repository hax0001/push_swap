/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 04:35:56 by nait-bou          #+#    #+#             */
/*   Updated: 2024/06/26 12:38:32 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	ft_lstadd_back(t_stack **lst, t_stack *new)
{
	if (!lst)
		return ;
	if (*lst)
		ft_lstlast(*lst)-> next = new;
	else
		*lst = new;
}
