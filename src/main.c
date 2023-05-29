/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:15:55 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/29 12:49:44 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	reset_color(void)
{
	ft_printf(1, "\e[0;37m");
}

void	terminate(char *msg)
{
	ft_printf(2, "%sError: %s\n", RED, msg);
	exit(1);
}

int main(int argc, char *argv[])
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		instructions;

	if (test() == 0)
		terminate("You failed at least one test!");
	stack_a = get_main_stack(argc, argv);
	stack_b = init_stack();
	instructions = stack_a->instructions + stack_b->instructions;
	sort5(stack_a, stack_b);
	ft_printf(1, "> Total instructions: %d\t a: %d\t b: %d\n", instructions, stack_a->instructions, stack_b->instructions);
	print_stack(*stack_a, 1);
	print_stack(*stack_b, 0);
	free_stack(stack_a);
	free_stack(stack_b);
	return (0);
}
