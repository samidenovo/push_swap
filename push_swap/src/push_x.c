/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:19:33 by samalves          #+#    #+#             */
/*   Updated: 2025/07/31 20:43:07 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_x(t_stack *a, t_stack *b)
{
	t_node	*tmp;

	if (!b || b->size == 0)
		return ;
	tmp = b->head;
	if (b->size > 1)
	{
		tmp->next->prev = tmp->prev; //if b->size == 1 will not work;
		tmp->prev->next = tmp->next; // b == 1 wnw
		b->head = tmp->next; // b == 1 wnw
	}
	if (b->size == 1)
		b = reset_stack(b) // draw this function
	if (a->size == 0)
	{
		a->head = tmp;
		a->tail = tmp;
	}
	tmp->next = a->head; // a == 0 wnw
	tmp->next->prev = tmp; 
	tmp->prev = a->tail; // a == 0 wnw
	tmp->prev->next = tmp;
	a->head = tmp;
	a->size++;
	b->size--;
}
