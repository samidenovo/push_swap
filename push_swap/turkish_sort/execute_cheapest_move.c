/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute_cheapest_move.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:11:27 by samalves          #+#    #+#             */
/*   Updated: 2025/08/06 17:22:35 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// TODO: na[position]->value < nb->next->value: fazer nb andar (conferir com o topo tb)
// TODO: se na[position] e position nao for == 0, andar ate o topo
// TODO: pushb em na
static int	position_b(t_stack *sa, t_stack *sb)
{
	t_node	tmp;
	int		position;

	tmp = sb->head;
	position = 0;
	while (sa->head->value < tmp->value)
	{
		tmp = tmp->next;
		position++;
	}
	return (position);
}

static void	move_b(t_stack **sa, t_stack **sb)
{
	int		position;

	position = position_b(sa, sb)
	if (position <= (sb->size / 2))
	{
		while (position > 0)
		{
			rotate_x(sb);
			write(2, "rb\n", 3);
			position--;
		}
	else
		while (position < sb->size)
		{
			reverse_rotate_x(sb)
			write(2, "rrb\n", 4);
			position++;
		}
	}
}

static void	move_a(t_stack **sa, int position)
{
	if (position <= (sa->size / 2))
	{
		while (position > 0)
		{
			rotate_x(sa);
			write(2,"ra\n", 3);
			position--;
		}
	}
	else
	{
		while (position < sa->size)
		{
			reverse_rotate_x(sa);
			write(2, "rra\n", 4);
			position++;
		}
	}
}

void	execute_cheapest_move(t_stack **sa, t_stack **sb, int position)
{
	if (/*position A and B has rotations, do toghether*/)
	{
		rr
		rrr
		//TODO: como fazer as rotacoes em comum e nao dar rotacoes a mais em um dos stacks?
	}
	//TODO: como fazer rr e rrr e diminuir da position A?
	move_a(*sa, position);
	move_b(*sa, *sb);
	//TODO: movimento de apenas passar para o stack B
}
