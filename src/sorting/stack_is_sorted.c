/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_is_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 12:49:27 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/28 17:49:55 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
Returns 1 if stack is sorted. Otherwise returns 0.
*/
int	stack_is_sorted(t_stack *stack)
{
	t_node	*tmp;

	tmp = stack->tail;
	while (tmp && tmp->next)
	{
		if (tmp->data < tmp->next->data)
			return (0);
		tmp = tmp->next;
	}
	return (1);
}
