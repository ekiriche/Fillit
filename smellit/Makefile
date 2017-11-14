# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/14 15:54:32 by ekiriche          #+#    #+#              #
#    Updated: 2017/11/14 15:56:25 by ekiriche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Wextra -Werror

$(NAME): all

all:
	gcc $(FLAGS) -o $(NAME) *.c

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
