NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf
LIBFT_PATH = ./libft
LIBFT = ${LIBFT_PATH}/libft.a
SRCS = push_swap.c radix.c sort_five.c sort_four.c sort_utils.c utils_a.c utils_b.c utils_c.c validation_utils.c validation.c
OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS} ${LIBFT}
	${CC} ${CFLAGS} ${OBJS} ${LIBFT} -o ${NAME}

${LIBFT}:
	make -C ${LIBFT_PATH} all

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	make -C ${LIBFT_PATH} clean
	${RM} ${OBJS}

fclean: clean
	make -C ${LIBFT_PATH} fclean
	${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re
