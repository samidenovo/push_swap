/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turkish_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:03:27 by samalves          #+#    #+#             */
/*   Updated: 2025/08/06 15:30:56 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	turkish_sort(t_stack *a, t_stack *b)
{
	init_sort(a, b);
	while (a->size != 3)
	{
		cheapest_element(a, b);
		//ft movement + optimization of group movement
	}
	//ft organize A
	//ft to pass B to A
	//finish
}
