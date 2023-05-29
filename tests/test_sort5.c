/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_sort5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 11:31:38 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/29 12:38:53 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	test_sort5(void)
{
	int		std_out = dup(STDOUT_FILENO);
	int 	devNull = open("/dev/null", O_WRONLY);
	int		total_tests = 7;
	int		passed_tests = 0;
	char	*list1[] = {"ignore_me.exe", "3 1", "2 4 0", NULL};
	t_stack	*s1_a = get_main_stack(3, list1);
	t_stack	*s1_b = init_stack();
	char	*list2[] = {"ignore_me.exe", "2 0 4 1 3", NULL};
	t_stack	*s2_a = get_main_stack(4, list2);
	t_stack	*s2_b = init_stack();
	char	*list3[] = {"ignore_me.exe", "0 3 2 1 4", NULL};
	char	*list4[] = {"ignore_me.exe", "4 1 0 5 -1", NULL};
	t_stack	*s3_a = get_main_stack(3, list3);
	t_stack	*s3_b = init_stack();
	t_stack	*s4_a = get_main_stack(2, list1);
	t_stack	*s5_a = get_main_stack(2, list2);
	t_stack	*s5_b = init_stack();
	t_stack	*s6_a = get_main_stack(2, list3);
	t_stack	*s6_b = init_stack();
	t_stack	*s7_a = get_main_stack(2, list4);
	t_stack	*s7_b = init_stack();


	if (devNull == -1)
		ft_printf(1, "Failed to open /dev/null\n");
	ft_printf(1, "%stest_sort5\n", YELLOW);
	
	dup2(devNull, 1);
	sort5(s1_a, s1_b);
	sort5(s2_a, s2_b);
	sort5(s3_a, s3_b);
	sort5(s5_a, s5_b);
	sort5(s6_a, s6_b);
	sort5(s7_a, s7_b);
	dup2(std_out, 1);
	passed_tests += assert_equal_int(stack_is_sorted(s1_a), 1);
	passed_tests += assert_equal_int(stack_is_sorted(s2_a), 1);
	passed_tests += assert_equal_int(stack_is_sorted(s3_a), 1);
	passed_tests += assert_equal_int(stack_is_sorted(s4_a), 0);
	passed_tests += assert_equal_int(stack_is_sorted(s5_a), 1);
	passed_tests += assert_equal_int(stack_is_sorted(s6_a), 1);
	passed_tests += assert_equal_int(stack_is_sorted(s7_a), 1);
	test_msg(total_tests, passed_tests);
	free_stack(s1_a);
	free_stack(s2_a);
	free_stack(s3_a);
	free_stack(s4_a);
	free_stack(s5_a);
	free_stack(s6_a);
	free_stack(s7_a);
	free_stack(s1_b);
	free_stack(s2_b);
	free_stack(s3_b);
	free_stack(s5_b);
	free_stack(s6_b);
	free_stack(s7_b);
	return (passed_tests == total_tests);
}
