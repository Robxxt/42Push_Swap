/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:15:55 by rdragan           #+#    #+#             */
/*   Updated: 2023/06/01 17:00:53 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	terminate(char *msg)
{
	ft_printf(2, "%sError: %s\n", RED, msg);
	exit(1);
}

int	main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	stack_a = get_main_stack(argc, argv);
	stack_b = init_stack();
	sort(stack_a, stack_b);
	print_stack(*stack_a, 1);
	free_stack(stack_a);
	stack_a = NULL;
	free_stack(stack_b);
	stack_b = NULL;
	return (0);
}
