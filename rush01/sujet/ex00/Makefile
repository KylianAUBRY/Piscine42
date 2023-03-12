# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yalounic <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/11 02:11:50 by yalounic          #+#    #+#              #
#    Updated: 2023/03/12 02:15:02 by yalounic         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = rush01

SRCS =	testmap.c \
		init_arg.c \
		back.c \
		verif.c \
		check.c \
		check_cl.c \

		
OBJ =	${SRCS:.c=.o}

CC =	cc -g3

CFLAGS	= 	-Wall -Wextra -Werror

.c.o:
		$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): ${OBJ}
		$(CC) $(CFLAGS) -o $(NAME) ${OBJ}

all: ${NAME}

clean:
		rm -f ${OBJ}

fclean: clean
		rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re

