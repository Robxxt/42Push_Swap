/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_size.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 09:58:14 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/27 09:58:29 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

int	list_size(char **argv)
{
	int		i;
	int		j;
	int		size;
	char	**tmp;

	i = 1;
	size = 0;
	while (argv[i])
	{
		j = -1;
		tmp = ft_split(argv[i], ' ');
		while (tmp[++j])
			size++;
		free_split(tmp);
		i++;
	}
	return (size);
}
