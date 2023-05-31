/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:04:57 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/31 16:59:29 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	get_max_3(t_stack *stack_a, t_stack *stack_b)
{
	int	max;
	max = stack_a->length;

	while (stack_a->length > 3)
	{
		if (stack_a->head->data < max - 3)
			push(stack_a, stack_b, 1);
		else
			rotate(stack_a, 1);
	}
}

void	sort(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->length == 2)
	{
		if (stack_a->head->data > stack_a->head->prev->data)
			swap(stack_a, 1);
	}
	else if (stack_a->length == 3)
		sort3(stack_a, 1);
	else if (stack_a->length == 4)
	{
		get_max_3(stack_a, stack_b);
		sort3(stack_a, 2);
		// print_stack(*stack_a, 1);
		// print_stack(*stack_b, 0);
		push(stack_a, stack_b, 0);
	}
	else if (stack_a->length == 5)
		sort5(stack_a, stack_b, 2);
	else
		radix_sort(stack_a, stack_b);
}
