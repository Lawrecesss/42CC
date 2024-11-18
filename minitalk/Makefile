SERVER = server
CLIENT = client
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf
PRINTF_PATH = ./ft_printf
PRINTF = ${PRINTF_PATH}/libftprintf.a
SERVER_SRC = server.c
SERVER_OBJ = ${SERVER_SRC:.c=.o}
CLIENT_SRC = client.c
CLIENT_OBJ = ${CLIENT_SRC:.c=.o}

all: ${SERVER} ${CLIENT}

${SERVER}: ${SERVER_OBJ} ${PRINTF}
	${CC} ${CFLAGS} ${SERVER_OBJ} ${PRINTF} -o ${SERVER}

${CLIENT}: ${CLIENT_OBJ} ${PRINTF}
	${CC} ${CFLAGS} ${CLIENT_OBJ} ${PRINTF} -o ${CLIENT}

${PRINTF}:
	make -C ${PRINTF_PATH} all

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

clean:
	make -C ${PRINTF_PATH} clean
	${RM} ${SERVER_OBJ} ${CLIENT_OBJ}

fclean: clean
	make -C ${PRINTF_PATH} fclean
	${RM} ${SERVER} ${CLIENT}

re: fclean all

.PHONY: all clean fclean re
