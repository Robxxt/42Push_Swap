/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 16:36:44 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/31 16:51:22 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
Returns the amount of bits that compose a number.
If the number is 0 it returns 1;
*/
int	get_bits(unsigned int n)
{
	int	bits;

	if (n == 0)
		return (1);
	bits = 0;
	while (n)
	{
		n /= 2;
		bits++;
	}
	return (bits);
}

/*
Sorts a stack composed of three nodes.
@param *stack_a: pointer to stack_a.
@param *stack_b: pointer to stack_a.
*/
void	radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	len;
	int	i;
	int	j;
	int	max_bits;

	len = stack_a->length;
	max_bits = get_bits(len);
	i = -1;
	while (++i < max_bits)
	{
		j = -1;
		while (++j < len)
		{
			if (stack_a->head->data >> i & 1)
			{
				rotate(stack_a, 1);
				if (stack_is_sorted(stack_a))
					break ;
			}
			else
				push(stack_a, stack_b, 1);
		}
		while (stack_b->head)
			push(stack_a, stack_b, 0);
	}
}
