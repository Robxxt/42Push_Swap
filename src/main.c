/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 16:15:55 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/27 09:23:35 by rdragan          ###   ########.fr       */
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
	ft_printf(1, "This tests that libft was imported fine!: There are %d args for the program %s\n", argc, argv[0]);
	
	// int	list2[] = {1, 2, 3, 1};
	// ft_printf(1, "%d", s_unique(list2, sizeof(list2) / sizeof(int)));
	test();
	return (0);
}
