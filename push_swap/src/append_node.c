/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_node.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:54:22 by samalves          #+#    #+#             */
/*   Updated: 2025/07/28 22:19:45 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*append_node(int nbr, t_stack *stack)
{
	t_node	*new;

	new = init_node();
	new->value = nbr;
	if (stack->head == NULL)
	{
		stack->head = new;
		stack->tail = new;
		new->next = new;
		new->prev = new;
	}
	else
	{
		stack->tail->next = new;
		new->prev = stack->tail;
		stack->tail = new;
		new->next = stack->head;
		stack->head->prev = new;
	}
	stack->size++;
	return (stack);
}
