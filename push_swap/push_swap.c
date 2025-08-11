/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:30:44 by samalves          #+#    #+#             */
/*   Updated: 2025/08/11 21:51:24 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack *a)
{
	t_stack	*b;

	b = init_stack();
	if (a->size == 2)
	{
	}
	else if (a->size == 3)
		sorting_three(a);
	else if (a->size == 4)
	{
	}
	else if (a->size == 5)
	{
	}
	else
		turkish_sort(a, b);
	free_stack(b);
}
