/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_unique.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 08:30:12 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/27 08:31:46 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
Validates if the list is composed only of uniq numbers.
Returns 1 on succeed & 0 on failure.
*/
int	is_unique(int *list, int size)
{
	int	i;
	int	j;

	i = -1;
	while (list[++i])
	{
		j = i + 1;
		while (j < size)
		{
			if (list[i] == list[j])
				return (0);
			j++;
		}
	}
	return (1);
}