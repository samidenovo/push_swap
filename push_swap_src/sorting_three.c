/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:51:48 by samalves          #+#    #+#             */
/*   Updated: 2025/08/18 14:08:18 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sorting_three(t_stack *a, t_stack *b)
{
	while (!is_sorted(a, b))
	{
		if (a->head->value > a->head->next->value)
		{
			swap_x(a);
			write (1, "sa\n", 3);
		}
		else
		{
			reverse_rotate_x(a);
			write (1, "rra\n", 4);
		}
	}	
}
