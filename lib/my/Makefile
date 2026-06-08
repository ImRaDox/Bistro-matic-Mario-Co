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
			my_atoi.c			\
			my_printf.c			\
			my_put_nbr.c		\
			my_putchar.c		\
			my_putstr.c			\
			my_str_to_word_array.c	\
			my_strcat.c			\
			my_strcmp.c			\
			my_strcpy.c			\
			my_strdup.c			\
			my_strlen.c			\
			my_strncmp.c		\
			my_strndup.c		\
			my_strcasecmp.c		\
			my_strstr.c			\
			my_strjoin.c		\
			my_str_utils.c		\
			my_str_manip.c		\
			my_char.c			\
			my_split.c			\
			my_arr.c			\
			my_sort.c			\
			my_read.c			\
			my_stdin.c			\
			my_grid.c			\
			my_copy_grid.c		\
			my_lst.c			\
			my_args.c			\
			my_math.c			\
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
