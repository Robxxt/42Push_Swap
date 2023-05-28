/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/18 00:08:06 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/28 12:09:52 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	reverse_rotate(t_stack *stack, int is_a)
{
	t_node	*tmp1;

	if (is_a == 1)
		ft_printf(1, "rra\n");
	else
		ft_printf(1, "rrb\n");
	tmp1 = stack->tail;
	stack->tail->next->prev = NULL;
	stack->tail = stack->tail->next;
	tmp1->prev = stack->head;
	stack->head->next = tmp1;
	stack->head = tmp1;
}

void	rotate(t_stack *stack, int is_a)
{
	t_node	*tmp1;
	t_node	*tmp2;

	if (is_a == 1)
		ft_printf(1, "ra\n");
	else
		ft_printf(1, "rb\n");
	tmp1 = stack->head;
	tmp2 = stack->tail;
	stack->head = stack->head->prev;
	stack->head->next = NULL;
	tmp1->prev = NULL;
	tmp1->next = tmp2;
	tmp2->prev = tmp1;
	stack->tail = tmp1;
}
