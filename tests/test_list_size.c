/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_list_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 09:50:07 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/27 10:02:03 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	test_list_size(void)
{
	int		total_tests = 3;
	int		passed_tests = 0;
	char	*list1[] = {"ignore_me.exe", "1 2 3", "4", "5", NULL};
	char	*list2[] = {"ignore_me.exe", "1 2 3", NULL};
	char	*list3[] = {"ignore_me.exe", "", NULL};

	ft_printf(1, "%stest_list_size\n", YELLOW);
	
	passed_tests += assert_equal_int(list_size(list1), 5);
	passed_tests += assert_equal_int(list_size(list2), 3);
	passed_tests += assert_equal_int(list_size(list3), 0);
	test_msg(total_tests, passed_tests);
	return (passed_tests == total_tests);
}
