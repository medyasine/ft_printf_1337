
SRC = ft_putnbr.c ft_putunbr.c ft_putchar.c ft_putstr.c   ft_printf.c 
OBJ = ${SRC:.c=.o}
CFLAGS = -Wall -Wextra -Werror
CC = cc
NAME = libftprintf.a


all: ${NAME}

${NAME}: ${OBJ}
	ar rcs ${NAME} ${OBJ}
%.o:%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -rf ${OBJ}

fclean:
	rm -rf ${NAME} ${OBJ}

re: fclean all