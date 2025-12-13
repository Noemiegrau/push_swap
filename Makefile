# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nograu <nograu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/11/11 17:04:28 by nograu            #+#    #+#              #
#    Updated: 2025/12/13 15:20:16 by nograu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	push_swap

SRC	=	main.c push_swap.c linked_lists.c 

OBJ	=	$(SRC:.c=.o)

CC	=	cc

FLAGS	=	-Wall -Werror -Wextra

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re