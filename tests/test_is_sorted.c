/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_is_sorted.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 09:27:54 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/27 09:30:24 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	test_is_sorted(void)
{
	int	total_tests = 8;
	int	passed_tests = 0;
	int	list1[] = {1, 2, 3};
	int	list2[] = {1, 2, 3, 1};
	int	list3[] = {1, 2, 3, -1};
	int	list4[] = {1};
	int	list5[] = {-1};
	int	list6[] = {0};
	int	list7[] = {5, 4 ,3};
	int	list8[] = {-1, 100, 400};

	ft_printf(1, "%stest_is_sorted\n", YELLOW);
	
	passed_tests += assert_equal_int(is_sorted(list1, sizeof(list1) / sizeof(int)), 1);
	passed_tests += assert_equal_int(is_sorted(list2, sizeof(list2) / sizeof(int)), 0);
	passed_tests += assert_equal_int(is_sorted(list3, sizeof(list3) / sizeof(int)), 0);
	passed_tests += assert_equal_int(is_sorted(list4, sizeof(list4) / sizeof(int)), 1);
	passed_tests += assert_equal_int(is_sorted(list5, sizeof(list5) / sizeof(int)), 1);
	passed_tests += assert_equal_int(is_sorted(list6, sizeof(list6) / sizeof(int)), 1);
	passed_tests += assert_equal_int(is_sorted(list7, sizeof(list7) / sizeof(int)), 0);
	passed_tests += assert_equal_int(is_sorted(list8, sizeof(list8) / sizeof(int)), 1);


	test_msg(total_tests, passed_tests);
	return (passed_tests == total_tests);
}