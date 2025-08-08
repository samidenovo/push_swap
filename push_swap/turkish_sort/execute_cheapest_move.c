/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_cheapest_move.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:11:27 by samalves          #+#    #+#             */
/*   Updated: 2025/08/08 20:06:04 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	pos_b(t_stack *sa, t_stack *sb)
{
	t_node	*tmp;
	int		position;

	tmp = sb->head;
	position = 0;
	while (sa->head->value < tmp->value && position < sb->size)
	{
		tmp = tmp->next;
		position++;
	}
	return (position);
}

static void	move_b(t_stack **sb, int *position)
{
	if (*position <= (sb->size / 2))
	{
		while (position > 0)
		{
			rotate_x(sb);
			write(1, "rb\n", 3);
			(*position)--;
		}
	}
	else
	{
		while (*position < sb->size)
		{
			reverse_rotate_x(sb);
			write(1, "rrb\n", 4);
			(*position)++;
		}
	}
}

static void	move_a(t_stack **sa, int *position)
{
	if (*position <= (sa->size / 2))
	{
		while (*position > 0)
		{
			rotate_x(sa);
			write(1,"ra\n", 3);
			(*position)--;
		}
	}
	else
	{
		while (*position < sa->size)
		{
			reverse_rotate_x(sa);
			write(1, "rra\n", 4);
			(*position)++;
		}
	}
}

static void	move_all(t_stack **sa, t_stack **sb, int *position_a, int *position_b)
{
	if (*position_a <= (sa->size / 2) && *position_b <= (sb->size / 2))
	{
		while (*position_a > 0 && *position_b > 0)
		{
			rotate_r(sa, sb);
			write(1, "rr\n", 3);
			(*position_a)--;
			(*position_b)--;
		}
	}
	else if (*position_a > (sa->size / 2) && *position_b > (sb->size / 2))
	{
		while (*position_a <= (sa->size) && *position_b <= (sb->size))
		{
			reverse_rotate_r(sa, sb);
			write(1, "rrr\n", 4);
			(*position_a)++;
			(*position_b)++;
		}
		if (*position_a > sa->size)
			*position_a = 0;
		if (*position_b > sb->size)
			*position_b = 0;
	}	
}

void	execute_cheapest_move(t_stack **sa, t_stack **sb, int position)
{
	int	position_a;
	int	position_b;

	position_a = position;
	position_b = pos_b(sa, sb);
	if (position_a > 0 && position_b > 0)
		move_all(sa, sb, &position_a, &position_b);
	if (position_a > 0)
		move_a(sa, &position_a);
	if (position_b > 0)
		move_b(sb, &position_b);
	if (sa->size > 0)
	{
		push_x(sb, sa);
		write(1, "pb\n", 3);
	}
}
