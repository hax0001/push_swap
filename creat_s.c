/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   creat_s.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 12:09:56 by nait-bou          #+#    #+#             */
/*   Updated: 2024/07/16 10:08:33 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int **creat_s(char **s)
{
	int	**result;
	int	count;
	int	i;

	i = 0;
	count = 0;
	result = NULL;
	while (s[count] != NULL)
		count++;
	result = malloc((count) * sizeof(int *));
	if (!result)
		error2();
	while (s[i + 1])
	{
		result[i] = malloc(sizeof(int));
		if (!result[i])
			error2();
		*result[i] = ft_atoi(s[i + 1]);
		i++;
	}
	result[i] = NULL;
	return (result);
}
