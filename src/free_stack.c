/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:57:34 by rdragan           #+#    #+#             */
/*   Updated: 2023/06/01 17:07:13 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_stack(t_stack *stack)
{
	t_node	*curr;
	t_node	*last;

	curr = NULL;
	if (stack && stack->tail)
		curr = stack->tail;
	while (curr)
	{
		ft_printf(1, "freed: %p\n", curr);
		last = curr->next;
		free(curr);
		curr = last;
	}
	free(stack);
}
