/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert_equal_int_list.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 10:05:32 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/27 10:11:07 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	assert_equal_int_list(int *list, int *expected_list, int list1_size, int list2_size)
{
	reset_color();
	if (list1_size != list2_size)
	{
		fail();
		return (0);
	}
	for (int i = 0; i < list1_size; i++)
	{
		if (list[i] != expected_list[i])
		{
			fail();
			return (0);
		}
	}
	pass();
	return (1);
}
