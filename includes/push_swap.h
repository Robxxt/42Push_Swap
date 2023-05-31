/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:20:10 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/31 17:16:15 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "../lib/libft/libft.h"
# include "../lib/linked_list/linked_list.h"
# include <fcntl.h>

# define RED "\e[1;31m"

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
void	sort_up_to50(t_stack *stack_a, t_stack *stack_b);
int		get_max_in_stack(t_stack *stack);
void	radix_sort(t_stack *stack_a, t_stack *stack_b);

#endif
