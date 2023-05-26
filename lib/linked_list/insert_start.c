/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_start.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:20:29 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/13 03:22:09 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

/*
Returns the first item address.
*/
t_node	*insert_to_start(t_node **first_node, int data)
{
	t_node	*tmp;
	t_node	*new;

	if (*first_node == NULL)
	{
		return (create_node(data));
	}
	new = create_node(data);
	tmp = *first_node;
	new->next = tmp;
	tmp->prev = new;
	return (new);
}
