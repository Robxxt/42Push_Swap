/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 17:24:44 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/26 18:05:05 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

/*
Returns 1 if the supplied string can be converted to a valid
integer number. Otherwise returns 0.
*/
int	is_valid_int(char *str)
{
	if (ft_str_isdigit(str) == 0)
		return (0);
	if (long_atoi(str) > INT_MAX || long_atoi(str) < INT_MIN)
		return (0);
	if (ft_strlen(str) > 12)
		return (0);
	return (1);
}
