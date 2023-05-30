/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_up_to50.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:22:10 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/30 15:24:33 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	get_max_in_stack(t_stack *stack)
{
	int		max;
	t_node	*tmp;

	tmp = stack->head;
	max = tmp->data;
	while (tmp)
	{
		if (max < tmp->data)	
			max = tmp->data;
		tmp = tmp->prev;
	}
	return (max);
}

/*
Sorts a stack composed of three nodes.
@param *stack_a: pointer to stack_a.
@param *stack_b: pointer to stack_a.
*/
void	sort_up_to50(t_stack *stack_a, t_stack *stack_b)
{
	int	length;
	int	max_in_stack_b;

	length = stack_a->length;
	while (stack_is_sorted(stack_a) == 0)
	{
		while (stack_a->length > 3)
		{
			if (stack_a->head->data < length - 3)
				push(stack_a, stack_b, 1);
			else
				rotate(stack_a, 1);
		}
		if (stack_is_sorted(stack_a) == 0)
			sort3(stack_a, length - 2);
		while (stack_b->length > 1)
		{
			max_in_stack_b = get_max_in_stack(stack_b);
			if (stack_b->head->data < stack_b->head->prev->data)
				swap(stack_b, 0);
			if (stack_b->head->data < max_in_stack_b / 2)
				rotate(stack_b, 0);
			else
				push(stack_a, stack_b, 0);
		}
	}
	if (stack_b->head->data < stack_b->tail->data)
		swap(stack_b, 0);
	push(stack_a, stack_b, 0);
	push(stack_a, stack_b, 0);
}
