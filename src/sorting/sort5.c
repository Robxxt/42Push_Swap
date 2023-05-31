/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 17:56:12 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/30 19:48:41 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
Sorts a stack composed of three nodes.
@param *stack_a: pointer to stack_a.
@param *stack_b: pointer to stack_a.
@param mid_index: the second biggest value.
*/
void	sort5(t_stack *stack_a, t_stack *stack_b, int mid_index)
{
	while (stack_a->length > 3)
	{
		if (stack_a->head->data < mid_index)
			push(stack_a, stack_b, 1);
		else
			rotate(stack_a, 1);
	}
	if (stack_is_sorted(stack_a) == 0)
		sort3(stack_a, 2);
	if (stack_b->head->data < stack_b->head->prev->data)
		swap(stack_b, 0);
	push(stack_a, stack_b, 0);
	push(stack_a, stack_b, 0);
}
