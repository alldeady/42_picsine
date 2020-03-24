# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: csnowbal <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/03/16 17:06:07 by csnowbal          #+#    #+#              #
#    Updated: 2020/03/16 22:38:35 by wnormcor         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = bsq
SRCS = srcs/cal_matrix.c srcs/get_params.c srcs/main.c srcs/out_result.c srcs/print_matrix.c srcs/read_file.c srcs/strings.c srcs/do_bsq.c
HEADERS = includes/bsq.h

all: $(NAME)

$(NAME):
	gcc -Wall -Wextra -Werror $(SRCS) -o $(NAME)

clean: 
	\bin\rm -f $(NAME)

re: clean all

.PHONY: all clean re
