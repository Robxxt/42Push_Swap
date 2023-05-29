/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 11:48:32 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/29 09:26:21 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	print_stack(t_stack stack, int is_stack_a)
{
	t_node	*tmp;

	tmp = stack.head;
	if (!tmp)
		return ;
	ft_printf(1, "\n");
	if (is_stack_a == 1)
		ft_printf(1, "STACK A:\n");
	else
		ft_printf(1, "STACK B:\n");
	while (tmp)
	{
		ft_printf(1, "index: %d\tcurr: %p\tprev: %p\tnext: %p\n",
			tmp->data, tmp, tmp->prev, tmp->next);
		tmp = tmp->prev;
	}
}
