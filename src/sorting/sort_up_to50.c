/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_up_to50.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 17:22:10 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/30 19:48:47 by rdragan          ###   ########.fr       */
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
	int	init_length;

	init_length = stack_a->length;
	while (stack_a->length > 5)
	{
		ft_printf(1, "h: %d\t init_len: %d\n", stack_a->head->data, init_length);
		// sleep(1);
		if (stack_a->head->data < init_length - 5)
			push(stack_a, stack_b, 1);
		else
			rotate(stack_a, 1);
	}
	sort5(stack_a, stack_b, init_length - 3);
	print_stack(*stack_a, 1);
	print_stack(*stack_b, 0);
}
