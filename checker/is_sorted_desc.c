/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_desc.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 16:56:17 by samalves          #+#    #+#             */
/*   Updated: 2025/08/17 22:22:21 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted_desc(t_stack *b)
{
	t_node	*tmp;
	int		greater;
	int		i;
	int		position;

	tmp = b->head;
	greater = b->head->value;
	i = 0;
	position = 0;
	while (i < b->size)
	{
		if (tmp->value > greater)
		{
			greater = tmp->value;
			position = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (position);
}
