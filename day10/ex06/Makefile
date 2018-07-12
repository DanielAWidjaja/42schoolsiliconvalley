# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/02 15:12:31 by dwidjaja          #+#    #+#              #
#    Updated: 2018/07/03 20:09:38 by dwidjaja         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do_op

SRC = do_op.c

OUT = do-op

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRC) -o $(OUT)

clean:
	/bin/rm -f $(OUT)

fclean:	clean
	/bin/rm -f $(OUT)

re: fclean all
