/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_main_stack.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 09:35:27 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/27 10:42:50 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

t_stack	*get_main_stack(int argc, char **argv)
{
	int		*tmp_list;
	t_stack	*stack_a = NULL;
	
	if (validate_int_input(argc, argv) == 0)
		terminate("The input must be composed only by integers!");
	tmp_list = get_list(argv, list_size(argv));
	is_sortable(&tmp_list, list_size(argv));
	return (stack_a);
}
