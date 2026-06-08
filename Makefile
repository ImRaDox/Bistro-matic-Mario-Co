## ----------------------------------------------------------------------------------- ##
## EPITECH PROJECT - 2026
## Title           - G-PSU-200-LIL-2-1-42sh-6
## ----------------------------------------------------------------------------------- ##

SRC_DIR = src/

SRC = $(SRC_DIR)operation.c   \
      $(SRC_DIR)eval_expr.c   \


MAIN_SRC = main.c
TESTS_DIR = test/
SRC_TESTS = $(TESTS_DIR)test_features.c 

NAME = calc
NAME_TESTS = unit_tests

CC = epiclang
CFLAGS = -Wall -Wextra -Iinclude
LDFLAGS = -Llib/my -lmy

all: $(NAME)

$(NAME):
	make -C lib/my
	$(CC) -o $(NAME) $(SRC) $(MAIN_SRC) $(CFLAGS) $(LDFLAGS)

$(NAME_TESTS):
	$(CC) -o $(NAME_TESTS) $(SRC) $(SRC_TESTS) $(CFLAGS) $(LDFLAGS) --coverage -lcriterion

tests_run: $(NAME) $(NAME_TESTS)
	-./$(NAME_TESTS)
	@echo "--- Statistiques de Couverture ---"
	llvm-cov gcov $(SRC) --branch-counts --branch-probabilities
	@echo "----------------------------------"

clean:
	rm -f *.o $(SRC_DIR)*.o
	find . -name "*.gcda" -delete
	find . -name "*.gcno" -delete
	make -C lib/my clean

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_TESTS)
	make -C lib/my fclean

re: fclean all
