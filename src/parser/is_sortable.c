/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sortable.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 09:33:13 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/27 09:44:57 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
If the list can't be sorted frees the list & exits the program.
*/
void	is_sortable(int **list, int size)
{
	if (is_unique(*list, size) == 0)
	{
		free(*list);
		terminate("The input contains repeated values!");
	}
	if (is_sorted(*list, size) == 1)
	{
		free(*list);
		exit(0);
	}
}
