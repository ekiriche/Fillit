# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ekiriche <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/16 14:02:30 by ekiriche          #+#    #+#              #
#    Updated: 2017/11/16 14:34:54 by ekiriche         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fillit

FLAGS = -Wall -Wextra -Werror

$(NAME): all

all:
	gcc $(FLAGS) -o $(NAME) libft/*.c *.c

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all
