/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   final_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:38:25 by samalves          #+#    #+#             */
/*   Updated: 2025/08/18 14:11:29 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	foward_b(t_stack *b, int position)
{
	while (position > 0)
	{
		rotate_x(b);
		write (1, "rb\n", 3);
		position--;
	}
}

static void	backward_b(t_stack *b, int position)
{
	while (position < b->size)
	{
		reverse_rotate_x(b);
		write (1, "rrb\n", 4);
		position++;
	}
}

void	final_sort(t_stack *a, t_stack *b)
{
	t_node	*tmp;
	int		position;
	int		i;

	sorting_three(a, NULL);
	tmp = b->head;
	position = is_sorted_desc(b);
	i = 3;
	if (position <= (b->size / 2))
		foward_b(b, position);
	else if (position > (b->size / 2))
		backward_b(b, position);
	if (b->size > 2)
	{
		while (a->tail->value > b->head->value && i > 0)
		{
			reverse_rotate_x(a);
			write(1, "rra\n", 4);
			i--;
		}
	}
}
