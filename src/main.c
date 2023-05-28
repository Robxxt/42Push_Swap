/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:15:55 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/28 11:47:56 by rdragan          ###   ########.fr       */
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

	test();
	stack_a = get_main_stack(argc, argv);
	return (0);
}
