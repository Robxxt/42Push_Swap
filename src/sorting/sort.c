/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 13:04:57 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/29 13:01:01 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

void	sort(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->length == 3)
		sort3(stack_a, 1);
	else if (stack_a->length == 5)
		sort5(stack_a, stack_b, 2);
}
