/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   insert_end.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 21:40:01 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/13 03:21:53 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_list.h"

/*
Returns the last item address.
*/
t_node	*insert_to_end(t_node **last_node, int data)
{
	t_node	*tmp;
	t_node	*new;

	if (*last_node == NULL)
	{
		return (create_node(data));
	}
	new = create_node(data);
	tmp = *last_node;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}
