/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turkish_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:03:27 by samalves          #+#    #+#             */
/*   Updated: 2025/08/15 19:30:40 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	turkish_sort(t_stack *a, t_stack *b)
{
	int	cheap;
	
	if (a->size >= 6)
	{
		init_sort(a, b);
		while (a->size != 3)
		{
			cheap = cheapest_element(a, b);
			execute_cheapest_move(a, b, cheap);
		}
		final_sort(a, b);
		merge_stacks(a, b);
	}
}
