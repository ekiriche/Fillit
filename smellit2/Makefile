# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/16 14:02:30 by ekiriche          #+#    #+#              #
#    Updated: 2017/11/22 15:41:39 by ekiriche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Wextra -Werror

SRC = algo.c checker.c destroyer.c main.c reader.c struct.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	make -C ./libft/ all
	gcc -o $(NAME) $(OBJ) -L ./libft/ -lft

%.o: %.c
	gcc $(FLAGS) -o $@ -c $<

clean:
	make -C ./libft/ clean
	rm -f *.o

fclean: clean
	make -C ./libft/ fclean
	rm -f $(NAME)

re: fclean all
