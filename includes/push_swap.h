/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:20:10 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/26 17:32:20 by rdragan          ###   ########.fr       */
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
int		assert_equal_int(int function_output, int expected_output);
int		test_is_valid_int(void);
void	test(void);
/*
Project
*/
int	is_valid_int(char *str);

#endif