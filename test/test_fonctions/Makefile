##
## EPITECH PROJECT, 2025
## my
## File description:
## Makefile
##

NAME	=	test_fonctions

CC		=	epiclang
CFLAGS	=	-Wall -Wextra -I../../include
LDFLAGS	=	-L../../lib/my -lmy

SRC		=	test_fonctions.c	\
			../../src/operation/add.c	\
			../../src/operation/operation_utils.c

OBJ		=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME): $(OBJ)
	$(MAKE) -C ../../lib/my
	$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re:	fclean all
	rm -f $(OBJ)

.PHONY:	all clean fclean re
