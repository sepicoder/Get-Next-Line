# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shomami <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/04/10 15:52:49 by shomami           #+#    #+#              #
#    Updated: 2018/04/17 14:03:43 by shomami          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = gnl

FILES = get_next_line.c\
		main.c 

OBJ = $(FILES:.c=.o)

LIBFT = libft -lft

CFLAGS = -Wall -Wextra -Werror -g

all: $(NAME)

$(NAME):
	make -C $(LIBFT)
	gcc $(CFLAGS) -c $(FILES)
	gcc	$(OBJ) -L $(LIBFT) -o $(NAME)

clean:
	make -C libft/ clean
	rm -f $(OBJ)


fclean: clean
	rm -f $(NAME)
	make -C libft/ fclean

re: fclean all
