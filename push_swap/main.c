/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:46:53 by samalves          #+#    #+#             */
/*   Updated: 2025/08/05 23:19:02 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*populate_stack(char **tokens, t_stack *stack_a)
{
	int		i;
	long	value;

	i = 0;
	while (tokens[i])
	{
		if (!(is_valid_number(tokens[i])))
			error_exit(NULL, stack_a, *tokens);
		value = ft_atol(tokens[i]);
		if (!(value >= INT_MIN && value <= INT_MAX))
			error_exit(NULL, stack_a, *tokens);
		stack_a = append_node(value, stack_a);
		if (is_duplicate(stack_a))
			error_exit(NULL, stack_a, *tokens);
		i++;
	}
	return (stack_a);
}

t_stack	*parse_arg(int ac, char **av)
{
	t_stack	*stack_a;
	char	**tokens;

	stack_a = init_stack();
	if (ac == 2)
		tokens = ft_split(av[1], ' ');
	else
		tokens = &av[1];
	if (!tokens)
		error_exit(NULL, stack_a, *tokens);
	stack_a = populate_stack(tokens, stack_a);
	if (ac == 2)
		free_tokens(tokens);
	return (stack_a);
}

int		main(int ac, char **av)
{
	t_stack	*stack_a;

	if (ac < 2)
		error_exit(NULL, NULL, NULL);
	stack_a = parse_arg(ac, av);
	if (!stack_a)
		error_exit(NULL, NULL, NULL);
	push_swap(stack_a);
	//verificar se 'e necessario FREE stack_a!!
	return (0);
}
