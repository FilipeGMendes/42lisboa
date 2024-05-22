NAME	=	libftprintf.a

SRCS	=	ft_printf.c \
			ft_printchar.c ft_printstr.c \
			ft_printptr.c \
			ft_printdigits.c ft_printupperdigits.c

CC		=	@cc
CFLAGS	=	-Wall -Werror -Wextra
OBJS	=	${SRCS:.c=.o}
OBJS_B	=	${SRC_B:.c=.o}
RM		=	@rm -f
LIBC	=	@ar -rcs
INCS	=	.

${NAME}: ${OBJS}
	@echo "Created .o files."
	${LIBC} ${NAME} ${OBJS}

all: ${NAME}

fclean: clean
	${RM} ${NAME}
	@echo "Cleaned printflibft.a."

clean:
	${RM} -f ${OBJS}
	@echo "Cleaned .o files."

re: fclean all

.PHONY: all fclean clean re .c.o