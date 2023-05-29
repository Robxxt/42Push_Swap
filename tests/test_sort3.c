/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sort3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 10:25:12 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/29 11:30:30 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../includes/push_swap.h"

int	test_sort3(void)
{
	int		std_out = dup(STDOUT_FILENO);
	int 	devNull = open("/dev/null", O_WRONLY);
	int		total_tests = 7;
	int		passed_tests = 0;
	char	*list1[] = {"ignore_me.exe", "1", "0", "5", NULL};
	t_stack	*s1_a = get_main_stack(4, list1);
	char	*list2[] = {"ignore_me.exe", "4", "0", "5", NULL};
	t_stack	*s2_a = get_main_stack(4, list2);
	char	*list3[] = {"ignore_me.exe", "4", "5", "0", NULL};
	char	*list4[] = {"ignore_me.exe", "4 1 0", NULL};
	t_stack	*s3_a = get_main_stack(4, list3);
	t_stack	*s4_a = get_main_stack(4, list1);
	t_stack	*s5_a = get_main_stack(4, list2);
	t_stack	*s6_a = get_main_stack(4, list3);
	t_stack	*s7_a = get_main_stack(2, list4);


	if (devNull == -1)
		ft_printf(1, "Failed to open /dev/null\n");
	ft_printf(1, "%stest_sort3\n", YELLOW);
	
	dup2(devNull, 1);
	sort3(s1_a, 1);
	sort3(s2_a, 1);
	sort3(s3_a, 1);
	sort3(s7_a, 1);
	dup2(std_out, 1);
	passed_tests += assert_equal_int(stack_is_sorted(s1_a), 1);
	passed_tests += assert_equal_int(stack_is_sorted(s2_a), 1);
	passed_tests += assert_equal_int(stack_is_sorted(s3_a), 1);
	passed_tests += assert_equal_int(stack_is_sorted(s4_a), 0);
	passed_tests += assert_equal_int(stack_is_sorted(s5_a), 0);
	passed_tests += assert_equal_int(stack_is_sorted(s6_a), 0);
	passed_tests += assert_equal_int(stack_is_sorted(s7_a), 1);
	test_msg(total_tests, passed_tests);
	free_stack(s1_a);
	free_stack(s2_a);
	free_stack(s3_a);
	free_stack(s4_a);
	free_stack(s5_a);
	free_stack(s6_a);
	free_stack(s7_a);
	return (passed_tests == total_tests);
}
