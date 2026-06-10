## ----------------------------------------------------------------------------------- ##
##                                                                                     ##
## EPITECH PROJECT - Tue, Jun, 2026                                                    ##
## Title           - Bistro-matic-Mario-Co                                             ##
## Description     -                                                                   ##
##     Makefile                                                                        ##
##                                                                                     ##
## ----------------------------------------------------------------------------------- ##
##                                                                                     ##
##       _|_|_|_|  _|_|_|    _|_|_|  _|_|_|_|_|  _|_|_|_|    _|_|_|  _|    _|          ##
##       _|        _|    _|    _|        _|      _|        _|        _|    _|          ##
##       _|_|_|    _|_|_|      _|        _|      _|_|_|    _|        _|_|_|_|          ##
##       _|        _|          _|        _|      _|        _|        _|    _|          ##
##       _|_|_|_|  _|        _|_|_|      _|      _|_|_|_|    _|_|_|  _|    _|          ##
##                                                                                     ##
## ----------------------------------------------------------------------------------- ##

SRC_DIR = src/

SRC = $(SRC_DIR)eval_expr.c   \


MAIN_SRC = main.c
TESTS_DIR = test/
FUNC_TESTS_DIR = test/test_fonctions/
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

fonctions_tests:
	$(MAKE) -C $(FUNC_TESTS_DIR)

tests_run: $(NAME) $(NAME_TESTS) fonctions_tests
	-./$(NAME_TESTS)
	@echo "--- Statistiques de Couverture ---"
	llvm-cov gcov $(SRC) --branch-counts --branch-probabilities
	@echo "----------------------------------"

clean:
	rm -f *.o $(SRC_DIR)*.o
	find . -name "*.gcda" -delete
	find . -name "*.gcno" -delete
	make -C lib/my clean
	$(MAKE) -C $(FUNC_TESTS_DIR) clean

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_TESTS)
	make -C lib/my fclean
	$(MAKE) -C $(FUNC_TESTS_DIR) fclean

re: fclean all
