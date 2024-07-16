/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nait-bou <nait-bou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:35:18 by nait-bou          #+#    #+#             */
/*   Updated: 2024/07/16 12:11:42 by nait-bou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	boble_sort(int **arr)
{
	int	i;
	int	j;
	int	*temp;

	i = 0;
	j = 0;
	temp = NULL;
	while (arr[i] != NULL)
	{
		j = 0;
		while (arr[j] != NULL)
		{
			if (*arr[i] < *arr[j])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
			j++;
		}
		i++;
	}
}

void get_rank(t_stack *a, char **str)
{
	t_stack	*temp;
	int		**s;
	int		i;
	
	i = 0;
	temp = a;
	s = creat_s(str);
	boble_sort(s);
	while (temp != NULL)
	{
		while (s[i] != NULL)
		{
			if (temp->nbr == *s[i])
				temp->rank = i;
			i++;
		}
		i = 0;
		temp = temp->next;
	}
	ft_freestr2(s);
	free(s);
}

void start_sort(t_stack *a, char **str)
{
	t_stack	*b;
	
	b = NULL;
	get_rank(a, str);
	if (ft_lstsize(a) == 2)
		sa(&a, 0);
	if (ft_lstsize(a) == 3)
		sort_3(a);
	else if (ft_lstsize(a) == 4)
		sort_4(a, b, 0);
	else if (ft_lstsize(a) == 5)
		sort_5(a);
	else if (ft_lstsize(a) > 5)
		big_sort(a, b);
}