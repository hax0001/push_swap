/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 01:23:07 by nait-bou          #+#    #+#             */
/*   Updated: 2024/07/20 18:43:30 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_stack	*ft_lstnew(long content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	new -> nbr = content;
	new -> next = NULL;
	return (new);
}
