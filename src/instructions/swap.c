/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 23:38:38 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/28 12:09:58 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	swap(t_stack *stack, int is_a)
{
	t_node	*head;
	t_node	*sub_head;

	if (is_a == 1)
		ft_printf(1, "sa\n");
	else
		ft_printf(1, "sb\n");
	head = stack->head;
	sub_head = head->prev;
	if (sub_head->prev)
	{
		head->prev = sub_head->prev;
		sub_head->prev->next = head;
	}
	else
	{
		head->prev = NULL;
		stack->tail = head;
	}
	head->next = sub_head;
	sub_head->next = NULL;
	sub_head->prev = head;
	stack->head = sub_head;
}
