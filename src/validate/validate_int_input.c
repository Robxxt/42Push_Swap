/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_int_input.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 09:37:41 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/27 09:43:32 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
Validates that there is an input and
that all input are integers. On succeed
return 1, on failure 0.
*/
int	validate_int_input(int argc, char **argv)
{
	int		i;
	int		j;
	char	**tmp;

	i = 1;
	if (argc < 2)
		return (0);
	while (argv[i])
	{
		j = -1;
		tmp = ft_split(argv[i], ' ');
		while (tmp[++j])
		{
			if (is_valid_int(tmp[j]) == 0)
			{
				free_split(tmp);
				return (0);
			}
		}
		free_split(tmp);
		i++;
	}
	return (1);
}