/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:20:39 by samalves          #+#    #+#             */
/*   Updated: 2025/07/29 16:09:37 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_duplicate(t_stack *stack)
{
	t_node	*node;
	int		count;

	if (!stack || stack->size <= 1)
		return (0);
	node = stack->tail->prev;
	count = stack->size - 1;
	while (count > 0)
	{
		if (stack->tail->value == node->value)
			return (1);
		node = node->prev;
		count--;
	}
	return (0);
}
