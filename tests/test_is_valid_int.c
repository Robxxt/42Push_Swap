/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_valid_int.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:23:12 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/27 08:37:36 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	test_is_valid_int(void)
{
	int	total_tests = 11;
	int	passed_tests = 0;
	
	ft_printf(1, "%stest_parser_item_counter\n", YELLOW);
	passed_tests += assert_equal_int(is_valid_int("1"), 1);
	passed_tests += assert_equal_int(is_valid_int("+1"), 1);
	passed_tests += assert_equal_int(is_valid_int("-1"), 1);
	passed_tests += assert_equal_int(is_valid_int("--1"), 0);
	passed_tests += assert_equal_int(is_valid_int("++1"), 0);
	passed_tests += assert_equal_int(is_valid_int("48120482"), 1);
	passed_tests += assert_equal_int(is_valid_int("-48120482"), 1);
	passed_tests += assert_equal_int(is_valid_int("-48120482795812441"), 0);
	passed_tests += assert_equal_int(is_valid_int("48120482795812441"), 0);
	passed_tests += assert_equal_int(is_valid_int("a"), 0);
	passed_tests += assert_equal_int(is_valid_int("124a"), 0);

	test_msg(total_tests, passed_tests);
	return (passed_tests == total_tests);
}