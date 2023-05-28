/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 17:46:12 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/28 12:10:40 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	set_stack_to_null(t_stack *stack)
{
	stack->head = NULL;
	stack->tail = NULL;
}

void	push_from_to(t_stack *first_stack, t_stack *second_stack)
{
	t_node	*tmp;

	tmp = first_stack->head;
	if (first_stack->length == 1)
		set_stack_to_null(first_stack);
	else
	{
		first_stack->head = tmp->prev;
		first_stack->head->next = NULL;
	}
	if (second_stack->length == 0)
	{
		tmp->prev = NULL;
		second_stack->tail = tmp;
		second_stack->head = tmp;
		insert_to_end(&second_stack->head, tmp->data);
	}
	else
	{
		tmp->prev = second_stack->head;
		second_stack->head->next = tmp;
		second_stack->head = tmp;
	}
	second_stack->length++;
	first_stack->length--;
}

void	push(t_stack *a, t_stack *b, int from_a)
{
	if (from_a == 1)
	{
		if (a->length == 0)
			return ;
		ft_printf(1, "pb\n");
		push_from_to(a, b);
	}
	else
	{
		if (b->length == 0)
			return ;
		ft_printf(1, "pa\n");
		push_from_to(b, a);
	}
}
