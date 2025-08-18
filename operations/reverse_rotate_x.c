/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_x.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 02:17:37 by samalves          #+#    #+#             */
/*   Updated: 2025/08/01 02:24:00 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_rotate_x(t_stack *a)
{
	if (!a || a->size <= 1)
		return ;
	a->tail = a->tail->prev;
	a->head = a->tail->next;
}
