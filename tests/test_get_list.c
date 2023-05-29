/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_get_list.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 10:26:48 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/29 12:11:24 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	test_get_list(void)
{
	int		total_tests = 3;
	int		passed_tests = 0;
	char	*list1[] = {"ignore_me.exe", "1 2 3", "4", "5", NULL};
	int		*l1 = get_list(list1, list_size(list1));
	int		expected_list1[] = {1, 2, 3, 4, 5};
	char	*list2[] = {"ignore_me.exe", "1 2 3", NULL};
	int		*l2 = get_list(list2, list_size(list2));
	int		expected_list2[] = {1, 2, 3};
	char	*list3[] = {"ignore_me.exe", "", NULL};
	int		*l3 = get_list(list3, list_size(list3));
	int		expected_list3[] = {0};

	ft_printf(1, "%stest_get_list\n", YELLOW);
	
	passed_tests += assert_equal_int_list(l1 , expected_list1, list_size(list1), 5);
	passed_tests += assert_equal_int_list(l2, expected_list2, list_size(list2), 3);
	passed_tests += assert_equal_int_list(l3, expected_list3, list_size(list3), 0);
	test_msg(total_tests, passed_tests);
	free(l1);
	free(l2);
	free(l3);
	return (passed_tests == total_tests);
}
