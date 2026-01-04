# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nograu <nograu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/11 17:04:28 by nograu            #+#    #+#              #
#    Updated: 2026/01/04 17:27:05 by nograu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# =========================
# Project
# =========================

NAME		=	push_swap

# =========================
# Compiler and Flags
# =========================

CC			=	cc

CFLAGS		=	-Wall -Werror -Wextra

# =========================
# Libft
# =========================

LIBFT_DIR	=	libft

LIBFT		=	$(LIBFT_DIR)/libft.a

# =========================
# Sources & Object Files
# =========================

SRC			=	push_swap.c \
				linked_lists_utils.c \
				instructions_reverse.c \
				instructions_rotate.c \
				instructions_swap_push.c \
				small_sort.c \
				sorting.c \
				big_sort_radix.c \
				big_sort_utils.c \
				parsing.c

OBJ			=	$(SRC:.c=.o)

# =========================
# Rules
# =========================

all: $(LIBFT) $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

# =========================
# Phony targets
# =========================

.PHONY: all clean fclean re