/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_x.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 01:48:18 by samalves          #+#    #+#             */
/*   Updated: 2025/08/01 02:14:40 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_x(t_stack *a)
{
	if (!a || a->size <= 1)
		return ;
	a->head = a->head->next;
	a->tail = a->tail->next;
	a->head->prev = a->tail;
	a->tail->next = a->head;
}
