/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linked_list.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdragan <rdragan@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 21:29:53 by rdragan           #+#    #+#             */
/*   Updated: 2023/05/13 03:21:08 by rdragan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINKED_LIST_H
# define LINKED_LIST_H

# include <stdlib.h>

typedef struct s_node {
	int				data;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack {
	t_node	*head;
	t_node	*tail;
}	t_stack;

t_node	*create_node(int data);
t_node	*insert_to_end(t_node **last_node, int data);
t_node	*insert_to_start(t_node **first_node, int data);

#endif