/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 22:43:39 by samalves          #+#    #+#             */
/*   Updated: 2025/08/14 00:18:14 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *a, t_stack *b)
{
	t_node	*tmp;

	tmp = a->head;
	while (tmp->value < tmp->next->value)
	{
		tmp = tmp->next;
		if (tmp->value == a->tail->value && (!b || b->size == 0))
			return (1);
	}
	return (0);
}
