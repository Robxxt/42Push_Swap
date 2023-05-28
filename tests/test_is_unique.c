/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_unique.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 08:32:27 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/28 11:38:05 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	test_is_unique(void)
{
	int	total_tests = 6;
	int	passed_tests = 0;
	int	list1[] = {1, 2, 3};
	int	list2[] = {1, 2, 3, 1};
	int	list3[] = {1, 2, 3, -1};
	int	list4[] = {1};
	int	list5[] = {-1};
	int	list6[] = {0};

	ft_printf(1, "%stest_is_unique\n", YELLOW);
	
	passed_tests += assert_equal_int(is_unique(list1, sizeof(list1) / sizeof(int)), 1);
	passed_tests += assert_equal_int(is_unique(list2, sizeof(list2) / sizeof(int)), 0);
	passed_tests += assert_equal_int(is_unique(list3, sizeof(list3) / sizeof(int)), 1);
	passed_tests += assert_equal_int(is_unique(list4, sizeof(list4) / sizeof(int)), 1);
	passed_tests += assert_equal_int(is_unique(list5, sizeof(list5) / sizeof(int)), 1);
	passed_tests += assert_equal_int(is_unique(list6, sizeof(list6) / sizeof(int)), 1);


	test_msg(total_tests, passed_tests);
	return (passed_tests == total_tests);
}