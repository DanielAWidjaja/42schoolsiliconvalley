# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dwidjaja <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/07 21:35:43 by dwidjaja          #+#    #+#              #
#    Updated: 2018/07/07 22:51:06 by tcardoza         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
NAME = rush-2
FLAG = -Wall -Werror -Wextra
INCLUDE = -I ./include
SRC = $(addprefix ./srcs/, $(SRCS))
SRCS = main.c rush.c rush00.c rush01.c rush02.c rush03.c rush04.c
OUTS = main.o rush.o rush00.o rush01.o rush02.o rush03.o rush04.o
OBJS = $(SRCS:.c=.c)

all: $(NAME)

$(NAME):
	@mkdir -p ./bin
	@$(CC) $(FLAG) $(INCLUDE) $(SRC) -o $(NAME)

clean:
	@rm -f $(OUTS)
	@rm -f ./bin/$(OUTS)

fclean: clean
	@rm -rf ./bin
	@rm -f $(NAME)

re: fclean all
