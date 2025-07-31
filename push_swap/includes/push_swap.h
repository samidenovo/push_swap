/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:55:52 by samalves          #+#    #+#             */
/*   Updated: 2025/07/29 21:20:25 by samalves         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h> //do tests and write ft. see if it's necessary later.
# include <stdio.h> //do tests. take it off later.
# include <stdlib.h>
# include <limits.h>

// Doubly Linked List
typedef struct s_node
{
	int				value;
	struct s_node	*next;
	struct s_node	*prev;
} t_node;
// Stack A and B
typedef struct s_stack
{
	t_node	*head;
	t_node	*tail;
	int		size;
} t_stack;

// Stack ft's
t_stack *init_stack(void);
push // insert an element to the top of list
pop // remove an element
top // returns the top element
isempty // info if the stack is empty
display // print all elements of the stack

// sorting and pushswap ft's

// parsing input

// errors ft's
int error_exit(void);

#endif
