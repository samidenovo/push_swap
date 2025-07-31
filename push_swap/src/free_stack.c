/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:03:19 by samalves          #+#    #+#             */
/*   Updated: 2025/07/29 18:23:48 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack)
{
	t_node	*current;
	t_node	*next;
	int		i;

	if (!stack || !stack->head)
		return;
	current = stack->head;
	i = 0;
	while (i < stack->size)
	{
		next = current->next;
		free (current);
		current = next;
		i++;
	}
	free (stack);
}
