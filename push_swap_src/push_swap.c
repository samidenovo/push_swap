/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 19:30:44 by samalves          #+#    #+#             */
/*   Updated: 2025/08/17 19:32:12 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	find_pos(t_stack *a)
{
	int		position;
	int		i;
	int		compare;
	t_node	*tmp;

	position = 0;
	i = 0;
	compare = a->head->value;
	tmp = a->head;
	while (i < a->size)
	{
		if (tmp->value < compare)
		{
			compare = tmp->value;
			position = i;
		}
		i++;
		tmp = tmp->next;
	}
	return (position);
}

static void	rotating_five(t_stack *a)
{
	int	position;

	position = find_pos(a);
	if (position <= (a->size / 2))
	{
		while (position != 0)
		{
			rotate_x(a);
			write (1, "ra\n", 3);
			position--;
		}
	}
	else if (position > (a->size / 2))
	{
		while (position != a->size)
		{
			reverse_rotate_x(a);
			write (1, "rra\n", 4);
			position++;
		}	
	}	
}
static void	sorting_five(t_stack *a, t_stack *b)
{
	while (b->size < 2)
	{
		rotating_five(a);
		push_x(b, a);
		write(1, "pb\n", 3);
	}
	final_sort(a, b);
	merge_stacks(a, b);
}

static void	sorting_four(t_stack *a, t_stack *b)
{
	push_x(b, a);
	write (1, "pb\n", 3);
	sorting_three(a, NULL);
	if (b->head->value > a->tail->value)
	{
		push_x(a, b);
		write (1, "pa\n", 3);
		rotate_x(a);
		write (1, "ra\n", 3);
	}
	while (b->size > 0 && b->head->value > a->head->value)
	{
		rotate_x(a);
		write (1, "ra\n", 3);
	}
	if (b->size != 0)
	{
		push_x(a, b);
		write (1, "pa\n", 3);
	}
	while (is_sorted(a, b) == 0)
	{
		reverse_rotate_x(a);
		write (1, "rra\n", 4);
	}
}

void	push_swap(t_stack *a)
{
	t_stack	*b;

	b = init_stack();
	if (is_sorted(a, b) == 0)
	{
		if (a->size == 2)
		{
			swap_x(a);
			write (1, "sa\n", 3);
		}
		else if (a->size == 3)
			sorting_three(a, b);
		else if (a->size == 4)
			sorting_four(a, b);
		else if (a->size == 5)
			sorting_five(a, b);
		else
			turkish_sort(a, b);
	}
	free_stack(b);
}
