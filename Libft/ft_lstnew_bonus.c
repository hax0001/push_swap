/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 01:23:07 by nait-bou          #+#    #+#             */
/*   Updated: 2024/06/26 12:53:53 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


t_stack	*ft_lstnew(long content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		error();
	new -> nbr = content;
	new -> next = NULL;
	return (new);
}
