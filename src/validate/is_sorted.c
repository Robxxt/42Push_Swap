/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 09:27:05 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/27 09:27:23 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
Returns 1 if the list is sorted & 0 otherwise.
*/
int	is_sorted(int *list, int size)
{
	int	i;
	int	j;

	i = -1;
	while (list[++i])
	{
		j = i + 1;
		while (j < size)
		{
			if (list[i] > list[j])
				return (0);
			j++;
		}
	}
	return (1);
}
