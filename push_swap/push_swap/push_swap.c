/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:30:44 by samalves          #+#    #+#             */
/*   Updated: 2025/08/06 14:05:19 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(t_stack *a)
{
	t_stack	*b;

	if (a->size < 2)
	{} //TODO: hardcode
	b = init_stack();
	if (a->size < 6)
	{} //TODO:hardcode
	else
		turkish_sort(a, b);
	free_stack(b);
}
