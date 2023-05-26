/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert_equal_int.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:46:09 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/26 17:14:19 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	assert_equal_int(int function_output, int expected_output)
{
	reset_color();
	if (function_output != expected_output)
	{
		ft_printf(1, "❌", RED);
		reset_color();
		return (0);
	}
	else
	{
		ft_printf(1, "✅");
	}
	return (1);
}
