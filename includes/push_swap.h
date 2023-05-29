/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:20:10 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/29 12:59:47 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/libft/libft.h"
# include "../lib/linked_list/linked_list.h"
# include <fcntl.h>

# define RED "\e[1;31m"
# define GREEN "\e[1;32m"
# define WHITE "\e[1;37m"
# define YELLOW "\e[1;33m"

/*
Tests
*/
int		test(void);
void 	reset_color(void);
void	fail(void);
void	pass(void);
void	print_stack(t_stack stack, int is_stack_a);
void	test_msg(int passed_tests, int total_tests);
int		assert_equal_int(int function_output, int expected_output);
int		assert_equal_int_list(int *list, int *expected_list, int list1_size, int list2_size);
int		test_is_valid_int(void);
int		test_is_unique(void);
int		test_is_sorted(void);
int		test_list_size(void);
int		test_get_list(void);
int		test_sort3(void);
int		test_sort5(void);

/*
Project
*/
int		is_valid_int(char *str);
void	terminate(char *msg);
int		is_unique(int *list, int size);
int		is_sorted(int *list, int size);
void	is_sortable(int **list, int size);
int		validate_int_input(int argc, char **argv);
t_stack	*get_main_stack(int argc, char **argv);
int		list_size(char **argv);
int		*get_list(char **argv, int size);
t_stack	*init_stack(void);
void	free_stack(t_stack *stack);
void	rotate(t_stack *stack, int is_a);
void	reverse_rotate(t_stack *stack, int is_a);
void	swap(t_stack *stack, int is_a);
void	push(t_stack *a, t_stack *b, int from_a);
int		stack_is_sorted(t_stack *stack);
void	sort(t_stack *stack_a, t_stack *stack_b);
void	sort3(t_stack *stack, int mid_index);
void	sort5(t_stack *stack_a, t_stack *stack_b, int mid_index);

#endif