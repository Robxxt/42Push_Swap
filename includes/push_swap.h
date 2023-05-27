/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:20:10 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/27 08:38:47 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/libft/libft.h"
# include "../lib/linked_list/linked_list.h"

# define RED "\e[1;31m"
# define GREEN "\e[1;32m"
# define WHITE "\e[1;37m"
# define YELLOW "\e[1;33m"
/*
Tests
*/
void 	reset_color(void);
void	print_stack(t_stack stack, int is_stack_a);
int		assert_equal_int(int function_output, int expected_output);
int		test_is_valid_int(void);
int		test_is_unique(void);
void	test(void);
void	test_msg(int passed_tests, int total_tests);

/*
Project
*/
int		is_valid_int(char *str);
void	terminate(char *msg);
int		is_unique(int *list, int size);

#endif