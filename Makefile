# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: samalves <samalves@student.42berlin.d      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/13 19:49:14 by samalves          #+#    #+#              #
#    Updated: 2025/08/17 17:23:43 by samalves         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SRCDIR = .
INCDIR = includes
OBJDIR = obj

CC = cc
CFLAGS = -Wall -Wextra -Werror -g -O0
INCLUDES = -I$(INCDIR)

SRCS = 	stacks/free_stack.c \
		stacks/init_stack.c \
		turkish_sort/execute_cheapest_move.c \
		turkish_sort/merge_stacks.c \
		turkish_sort/turkish_sort.c \
		turkish_sort/cheapest_element.c \
		turkish_sort/init_sort.c \
		turkish_sort/final_sort.c \
		utils/is_duplicate.c \
		utils/is_valid_number.c \
		utils/free_tokens.c \
		utils/error_exit.c \
		utils/ft_strdup.c \
		utils/ft_substr.c \
		utils/ft_split.c \
		utils/ft_strlen.c \
		utils/ft_atol.c \
		nodes/append_node.c \
		nodes/init_node.c \
		push_swap_src/push_swap.c \
		push_swap_src/sorting_three.c \
		push_swap_src/main.c \
		operations/reverse_rotate_r.c \
		operations/reverse_rotate_x.c \
		operations/rotate_r.c \
		operations/rotate_x.c \
		operations/swap_s.c \
		operations/swap_x.c \
		operations/push_x.c \
		checker/is_sorted.c \
		checker/is_sorted_desc.c

OBJS = $(SRCS:%.c=$(OBJDIR)/%.o)

HEADERS = $(INCDIR)/push_swap.h

GREEN = \033[0;32m
RED = \033[0;31m
RESET = \033[0m

all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(GREEN)Linking $(NAME)...$(RESET)"
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
	@echo "$(GREEN)✓ $(NAME) created successfully!$(RESET)"

$(OBJDIR)/%.o: %.c $(HEADERS) | $(OBJDIR)
	@mkdir -p $(dir $@)
	@echo "$(GREEN)Compiling $<...$(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)
	@mkdir -p $(OBJDIR)/stacks
	@mkdir -p $(OBJDIR)/turkish_sort
	@mkdir -p $(OBJDIR)/utils
	@mkdir -p $(OBJDIR)/nodes
	@mkdir -p $(OBJDIR)/push_swap
	@mkdir -p $(OBJDIR)/operations
	@mkdir -p $(OBJDIR)/checker

clean:
	@echo "$(RED)Cleaning object files...$(RESET)"
	@rm -rf $(OBJDIR)
	@echo "$(RED)✓ Object files cleaned!$(RESET)"

fclean: clean
	@echo "$(RED)Removing $(NAME)...$(RESET)"
	@rm -f $(NAME)
	@echo "$(RED)✓ $(NAME) removed!$(RESET)"

re: fclean all

.PHONY: all clean fclean re

.PRECIOUS: $(OBJDIR)/%.o
