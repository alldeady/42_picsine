# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/10 14:20:34 by csnowbal          #+#    #+#              #
#    Updated: 2020/03/10 23:08:01 by csnowbal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
SRCS = do_op.c ft_process.c ft_standart.c
HEADERS = ft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS) -I $(HEADERS)

clean:
	/bin/rm -f $(NAME)

re: clean all

.PHONY: all clean re
