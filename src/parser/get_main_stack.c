/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_main_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 09:35:27 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/28 11:46:01 by rdragan          ###   ########.fr       */
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

t_stack	*init_stack(void)
{
	t_stack	*new;

	new = (t_stack *)malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->head = NULL;
	new->tail = NULL;
	new->length = 0;
	new->instructions = 0;
	return (new);
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

/*
Verifies the input & returns a stack.
*/
t_stack	*get_main_stack(int argc, char **argv)
{
	int		*tmp_list;
	t_stack	*stack_a = NULL;
	
	if (validate_int_input(argc, argv) == 0)
		terminate("The input must be composed only by integers!");
	tmp_list = get_list(argv, list_size(argv));
	is_sortable(&tmp_list, list_size(argv));
	stack_a = get_init_stack(tmp_list, list_size(argv));
	free(tmp_list);
	return (stack_a);
}
