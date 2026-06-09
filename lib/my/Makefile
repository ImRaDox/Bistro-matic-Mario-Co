##
## EPITECH PROJECT, 2025
## my
## File description:
## Makefile
##

NAME	=	libmy.a

CC		=	epiclang
CFLAGS	=	-Wall -Wextra -Werror

SRC		=	my_getnbr.c			\
			my_printf.c			\
			my_atoi.c			\
			my_put_nbr.c		\
			my_putchar.c		\
			my_putstr.c			\
			my_str_to_word_array.c	\
			my_strcmp.c			\
			my_strlen.c			\
			my_puterr.c

OBJ		=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
	rm -f $(OBJ)

.PHONY:	all clean fclean re
