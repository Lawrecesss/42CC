NAME = libftprintf.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rcs
RM = rm -rf
LIBFT_PATH = ./libft
LIBFT = ${LIBFT_PATH}/libft.a
SRCS = ft_print_hex.c ft_print_nbr.c ft_print_char.c ft_print_percent.c ft_print_ptr.c ft_print_str.c ft_print_unsigned.c ft_printf.c
OBJS = ${SRCS:.c=.o}
all : ${NAME}
${NAME} : ${OBJS} ${LIBFT}
	cp $(LIBFT) ${NAME}
	${AR} $@ $^
${LIBFT} :
	make -C ${LIBFT_PATH} all
%.o : %.c
	${CC} ${CFLAGS} -c $< -o $@
clean :
	make -C ${LIBFT_PATH} clean
	${RM} ${OBJS}
fclean : clean
	make -C ${LIBFT_PATH} fclean
	${RM} ${NAME}
re : fclean all
.PHONY : all clean fclean re
