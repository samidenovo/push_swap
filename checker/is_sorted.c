/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 22:43:39 by samalves          #+#    #+#             */
/*   Updated: 2025/08/11 22:44:21 by samalves         ###   ########.fr       */
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
		if (tmp == a->tail && b->size == 0)
			return (1);
	}
	return (0);
}
