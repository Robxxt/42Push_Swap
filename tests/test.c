/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:30:30 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/27 09:25:52 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	test_msg(int total_tests, int passed_tests)
{
	if (passed_tests == total_tests)
		ft_printf(1, "\n%sPASSED: [%d / %d]\n", GREEN, passed_tests, total_tests);
	else
		ft_printf(1, "\n%sPASSED: [%d / %d]\n", RED, passed_tests, total_tests);
	reset_color();
}

void	test(void)
{
	int	passed_tests = 0;
	
	passed_tests += test_is_valid_int();
	passed_tests += test_is_unique();
}
