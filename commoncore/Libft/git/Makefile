CC = cc
CFLAGS = -Wall -Werror -Wextra

NAME = libft

SRCS		=
BONUS		=
OBJS		= $(SRCS: .c = .o)
INCLUDES	=./libft.h

all: 		${NAME}

${NAME}:	${OBJS}
		${CC} ${CFLAGS} -o ${NAME}

clean:
		@echo "Cleaning object files..."
		@rm -f ${OBJS}

fclean: clean
		@echo "Cleaning ${NAME} file..."
		@rm -f ${NAME}

re:		fclean all
		@echo "Cleaning every file..."
		@echo "compiling ${NAME}."