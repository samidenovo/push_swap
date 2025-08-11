/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:15:48 by samalves          #+#    #+#             */
/*   Updated: 2025/08/11 20:35:29 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	init_sort(t_stack *a, t_stack *b)
{
	push_x(b ,a);
	write(1, "pb\n", 3);
	push_x(b, a);
	write(1, "pb\n", 3);
	if (b->head->value < b->tail->value)
	{
		rotate_x(b);
		write(1, "rb\n", 3);
	}
}
