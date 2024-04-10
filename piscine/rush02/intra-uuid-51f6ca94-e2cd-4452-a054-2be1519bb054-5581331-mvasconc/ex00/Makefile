CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME = rush-02

SRCS 		= $(wildcard ./srcs/*.c)
OBJS 		= $(SRCS:.c=.o)
INCLUDES	= ./includes/

all:		${NAME}

${NAME}:	${OBJS}
	${CC} ${CFLAGS} -o ${NAME} ${OBJS}

.c.o:
	${CC} ${CFLAGS} -c -I ${INCLUDES} $< -o ${<:.c=.o}

%.o: %.c ${LIBS}
	${CC} ${CFLAGS} -c -I ${INCLUDES} $< -o $@

clean:
	@echo "Cleaning object files."
	@rm -f ${OBJS}

fclean:	clean
	@echo "Cleaning ${NAME} file."
	@rm -f ${NAME}

c: fclean

rn:	fclean all
	@echo "Cleaning all file then compiling ${NAME}."
