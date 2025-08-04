/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:19:33 by samalves          #+#    #+#             */
/*   Updated: 2025/08/01 01:47:00 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	handling_a(t_stack *a, t_node *tmp)
{
	if (a->size == 0)
	{
		a->head = tmp;
		a->tail = tmp;
	}
	tmp->next = a->head;
	tmp->next->prev = tmp;
	tmp->prev = a->tail;
	tmp->prev->next = tmp;
	a->head = tmp;
}

void	push_x(t_stack *a, t_stack *b)
{
	t_node	*tmp;

	if (!b || b->size == 0)
		return ;
	tmp = b->head;
	if (b->size > 1)
	{
		tmp->next->prev = tmp->prev;
		tmp->prev->next = tmp->next;
		b->head = tmp->next;
	}
	if (b->size == 1)
	{
		b->head = NULL;
		b->tail = NULL;
	}
	handling_a(a, tmp);
	a->size++;
	b->size--;
}
