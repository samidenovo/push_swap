/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_stacks.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:24:49 by samalves          #+#    #+#             */
/*   Updated: 2025/08/17 17:55:37 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	merge_stacks(t_stack *a, t_stack *b)
{
	while (b->size > 0)
	{
		while (a->tail->value < a->head->value && a->tail->value > b->head->value)
		{
			reverse_rotate_x(a);
			write(1, "rra\n", 4);
		}
		push_x(a, b);
		write (1, "pa\n", 3);
	}
	while (a->tail->value < a->head->value && b->size == 0)
	{
			reverse_rotate_x(a);
			write(1, "rra\n", 4);
	}
}
