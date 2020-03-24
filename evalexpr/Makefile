# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/14 16:08:15 by csnowbal          #+#    #+#              #
#    Updated: 2020/03/15 14:20:23 by csnowbal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRCS = srcs/*.c 
HEADERS = includes/ft.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror -o $(NAME) $(SRCS) -I $(HEADERS)

clean:
	/bin/rm -f $(NAME)

re: clean all

.PHONY: all clean re
