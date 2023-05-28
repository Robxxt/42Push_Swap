/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 09:49:10 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/27 10:29:30 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
Stores the arguments and subarguments of the program in a list.
*/
int	*get_list(char **argv, int size)
{
	int		*list;
	char	**tmp;
	int		k;
	int		i;
	int		j;

	list = (int *)malloc(sizeof(int) * size);
	i = 1;
	k = -1;
	while (argv[i])
	{
		j = -1;
		tmp = ft_split(argv[i], ' ');
		while (tmp[++j])
			list[++k] = ft_atoi(tmp[j]);
		free_split(tmp);
		i++;
	}
	return (list);
}

