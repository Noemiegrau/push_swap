# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nograu <nograu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/11 17:04:28 by nograu            #+#    #+#              #
#    Updated: 2026/01/08 16:43:08 by nograu           ###   ########.fr        #
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
# Sources & Object Files
# =========================

SRC			=	push_swap.c \
				linked_lists_utils.c \
				instructions_reverse.c \
				instructions_rotate.c \
				instructions_push.c \
				instructions_swap.c \
				small_sort.c \
				sorting.c \
				big_sort_radix.c \
				big_sort_utils.c \
				parsing.c \
				parsing_utils.c \
				parsing_utils2.c \
				free.c

OBJ			=	$(SRC:.c=.o)

# =========================
# Rules
# =========================

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

# =========================
# Phony targets
# =========================

.PHONY: all clean fclean re