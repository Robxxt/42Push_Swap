/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:57:34 by rdragan           #+#    #+#             */
/*   Updated: 2023/06/04 12:11:55 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	free_stack(t_stack *stack)
{
	t_node	*curr;
	t_node	*last;
	int		init_len;
	int		i;

	init_len = stack->length;
	curr = NULL;
	i = -1;
	if (stack && stack->tail)
		curr = stack->tail;
	while (++i < init_len)
	{
		last = curr->next;
		free(curr);
		curr = last;
	}
	if (stack)
		free(stack);
}
