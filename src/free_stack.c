/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:57:34 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/29 12:20:57 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_stack(t_stack *stack)
{
	t_node	*last;
	t_node	*prev;

	last = stack->head;
	prev = last;
	while (prev)
	{
		last = prev->prev;
		free(prev);
		prev = last;
	}
	free(stack);
}
