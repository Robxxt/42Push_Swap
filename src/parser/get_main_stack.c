/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_main_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 09:35:27 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/29 11:19:40 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
Returns the position of the supplied number in
the given list.
*/
int	get_index(int *arr, int size, int n)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (i < size)
	{
		if (n > arr[i])
			pos++;
		i++;
	}
	return (pos);
}

/*
Reads the input and makes the stack.
*/
t_stack	*get_init_stack(int *list, int size)
{
	t_stack	*stack;
	t_node	*start;
	t_node	*end;
	int		i;

	stack = init_stack();
	i = -1;
	end = NULL;
	while (++i < size)
	{
		end = insert_to_end(&end, get_index(list, size, list[i]));
		if (i == 0)
			start = end;
	}
	stack->head = end;
	stack->tail = start;
	stack->length = i;
	return (stack);
}

void	reverse_list(int *list, int length)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < length / 2)
	{
		tmp = list[i];
		list[i] = list[length - i -1];
		list[length - i -1] = tmp;
		i++;
	}
}

/*
Verifies the input & returns a stack.
*/
t_stack	*get_main_stack(int argc, char **argv)
{
	int		*tmp_list;
	int		list_length;
	t_stack	*stack_a = NULL;
	
	if (validate_int_input(argc, argv) == 0)
		terminate("The input must be composed only by integers!");
	list_length = list_size(argv);
	tmp_list = get_list(argv, list_length);
	is_sortable(&tmp_list, list_length);
	reverse_list(tmp_list, list_length);
	stack_a = get_init_stack(tmp_list, list_length);
	free(tmp_list);
	return (stack_a);
}
