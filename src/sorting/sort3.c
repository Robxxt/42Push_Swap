/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:06:09 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/30 20:19:55 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
Sorts a stack composed of three nodes.
@param *stack: pointer to stack.
@param mid_index: the medium index.
*/
void	sort3(t_stack *stack, int mid_index)
{
	while (stack_is_sorted(stack) == 0)
	{
		if (stack->head->data == mid_index)
			swap(stack, 1);
		else
			rotate(stack, 1);
	}
}