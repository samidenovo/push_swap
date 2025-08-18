/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:55:52 by samalves          #+#    #+#             */
/*   Updated: 2025/08/18 14:02:29 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
	struct s_node	*prev;
} t_node;

typedef struct s_stack
{
	t_node	*head;
	t_node	*tail;
	int		size;
} t_stack;

t_stack	*append_node(int nbr, t_stack *stack);
t_node	*init_node(void);
void	push_x(t_stack *dest, t_stack *src);
void	reverse_rotate_r(t_stack *a, t_stack *b);
void	reverse_rotate_x(t_stack *a);
void	rotate_r(t_stack *a, t_stack *b);
void	rotate_x(t_stack *a);
void	swap_s(t_stack *a, t_stack *b);
void	swap_x(t_stack *stack);
void	push_swap(t_stack *a);
void	sorting_three(t_stack *a, t_stack *b);
void	free_stack(t_stack *stack);
t_stack	*init_stack(void);
int		cheapest_element(t_stack *a, t_stack *b);
void	execute_cheapest_move(t_stack *sa, t_stack *sb, int position);
void	final_sort(t_stack *a, t_stack *b);
void	init_sort(t_stack *a, t_stack *b);
void	merge_stacks(t_stack *a, t_stack *b);
void	turkish_sort(t_stack *a, t_stack *b);
void	error_exit(t_stack *stack_a, t_stack *stack_b, char **tokens);
void	free_tokens(char **tokens);
long	ft_atol(char *s);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *s);
size_t	ft_strlen(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		is_duplicate(t_stack *stack);
int		is_valid_number(char *s);
int		is_sorted(t_stack *a, t_stack *b);
int		is_sorted_desc(t_stack *b);
int		main(int ac, char **av);

#endif
