SRCS = ft_printf.c srcs/ft_printchar.c srcs/ft_printstr.c \
       srcs/ft_printdigits.c

OBJS = ${SRCS:.c=.o}

NAME = libft.a
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -I ./includes/

.c.o:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${NAME} ${OBJS}

all: ${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY : all bonus clean fclean re