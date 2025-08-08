/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turkish_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:03:27 by samalves          #+#    #+#             */
/*   Updated: 2025/08/08 19:20:42 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	turkish_sort(t_stack **a, t_stack **b)
{
	int	cheap;

	init_sort(*a, *b);
	while (a->size != 3)
	{
		cheap = cheapest_element(a, b);
		execute_cheapest_move(*a, *b, cheap);
	}

	//ft organize A and B (make B decrecent, A crescent)
	//ft to pass B to A (always taking care to move A in the properly moment)
	//finish
}
