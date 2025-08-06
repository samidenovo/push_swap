/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_x.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 19:19:33 by samalves          #+#    #+#             */
/*   Updated: 2025/08/06 14:43:58 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	handling_dest(t_stack *dest, t_node *tmp)
{
	if (dest->size == 0)
	{
		dest->head = tmp;
		dest->tail = tmp;
	}
	tmp->next = dest->head;
	tmp->next->prev = tmp;
	tmp->prev = dest->tail;
	tmp->prev->next = tmp;
	dest->head = tmp;
}

void	push_x(t_stack *dest, t_stack *src)
{
	t_node	*tmp;

	if (!src || src->size == 0)
		return ;
	tmp = src->head;
	if (src->size > 1)
	{
		tmp->next->prev = tmp->prev;
		tmp->prev->next = tmp->next;
		src->head = tmp->next;
	}
	if (src->size == 1)
	{
		src->head = NULL;
		src->tail = NULL;
	}
	handling_dest(dest, tmp);
	dest->size++;
	src->size--;
}
