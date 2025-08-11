/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:51:48 by samalves          #+#    #+#             */
/*   Updated: 2025/08/11 22:45:53 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_three(t_stack *a, t_stack *b)
{
	t_node	*tmp;

	tmp = a->head;
	while (is_sorted(a, b) != 1)
	{
		if (tmp->value > tmp->next->value)
		{
			swap_x(a);
			write (1, "sa\n", 3);
		}
		if (tmp->next->value > tmp->next->next->value)
		{
			reverse_rotate_x(a);
			write (1, "rra\n", 3);
		}
	}
}
