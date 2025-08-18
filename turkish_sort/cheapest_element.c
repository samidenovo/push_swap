/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cheapest_element.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 23:21:38 by samalves          #+#    #+#             */
/*   Updated: 2025/08/15 19:29:39 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	cost_a(int position, int stack_size)
{
	int	cost;

	cost = 0;
	if (position <= (stack_size / 2))
		cost = position;
	else
		cost = stack_size - position;
	return (cost);
}

static int	cost_b(int value, t_stack *b)
{
	int		cost;
	int		position;
	t_node	*node;

	position = 0;
	if (b->size >= 1)
	{
		node = b->head;
		while (value < node->value && position < b->size)
		{
			node = node->next;
			position++;
		}
	}
	if (position <= (b->size / 2))
		cost = position;
	else
		cost = b->size - position;
	return (cost);
}

static int	find_position(int *arr, int size)
{
	int	i;
	int	position;

	i = 0;
	position = size / 2;
	while (i < size)
	{
		if (arr[i] < arr[position])
			position = i;
		i++;
	}
	return (position);
}

int	cheapest_element(t_stack *a, t_stack *b)
{
	int		*arr;
	int		i;
	int		count;
	t_node	*node_a;
	int		position;

	arr = malloc (sizeof(int) * a->size);
	if (!arr)
		error_exit(a, b, NULL);
	i = 0;
	node_a = a->head;
	while (i < a->size)
	{
		count = 0;
		count = cost_a(i, a->size) + cost_b(node_a->value, b);
		arr[i] = count;
		node_a = node_a->next;
		i++;
	}
	position = find_position(arr, a->size);
	free (arr);
	return (position);
}
