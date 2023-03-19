NAME	=	rush-02

SRCS	=	saint_main.c	\
				saint_algo.c	\
				saint_function.c 	\
				saint_display.c	\
		

OBJ =	${SRCS:.c=.o}

CC =	cc -g3

CFLAGS	=	-Wall -Wextra -Werror

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME): ${OBJ}
		$(CC) $(CFLAGS) -o $(NAME) ${OBJ}

all:	${NAME}

clean:
		rm -f ${OBJ}

fclean:	clean
		rm -f ${NAME}

re:	fclean all

.PHONY: all clean fclean re