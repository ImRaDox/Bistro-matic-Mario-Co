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
OPE_DIR = src/operation/
PARS_DIR = src/parser/

SRC = $(SRC_DIR)eval_expr.c   \
	  $(OPE_DIR)add.c\
	  $(OPE_DIR)sub.c\
	  $(OPE_DIR)mul.c\
	  $(OPE_DIR)operation_utils.c\
	  $(PARS_DIR)parse_expr.c\
	  $(PARS_DIR)parse_factor.c\
	  $(PARS_DIR)parse_number.c\
	  $(PARS_DIR)parse_term.c\
	  $(PARS_DIR)utils_parser.c
	  
MAIN_SRC = main.c
TESTS_DIR = test/
FUNC_TESTS_DIR = test/test_fonctions/
SRC_TESTS = $(TESTS_DIR)test_features.c
COVERAGE_FILES = $(addprefix $(NAME_TESTS)-,$(notdir $(SRC:.c=.gcno)))

NAME = calc
NAME_TESTS = unit_tests

CC = epiclang
CFLAGS = -Wall -Wextra -Iinclude
LDFLAGS = -Llib/my -lmy
LLVM_COV ?= $(shell command -v llvm-cov || command -v llvm-cov-20 || printf llvm-cov)

all: $(NAME)

$(NAME): $(SRC) $(MAIN_SRC)
	make -C lib/my
	$(CC) -o $(NAME) $(SRC) $(MAIN_SRC) $(CFLAGS) $(LDFLAGS)

$(NAME_TESTS): $(SRC) $(SRC_TESTS)
	make -C lib/my
	$(CC) -o $(NAME_TESTS) $(SRC) $(SRC_TESTS) $(CFLAGS) $(LDFLAGS) --coverage -lcriterion

fonctions_tests:
	$(MAKE) -C $(FUNC_TESTS_DIR)

tests_run: $(NAME) $(NAME_TESTS) fonctions_tests
	find . -name "*.gcda" -delete
	./$(NAME_TESTS) -j1
	@echo "--- Statistiques de Couverture ---"
	$(LLVM_COV) gcov $(COVERAGE_FILES) --branch-counts --branch-probabilities
	@echo "----------------------------------"

clean:
	rm -f *.o $(SRC_DIR)*.o
	find . -name "*.gcda" -delete
	find . -name "*.c.gcov" -delete
	find . -name "*.gcno" -delete
	make -C lib/my clean
	$(MAKE) -C $(FUNC_TESTS_DIR) clean

fclean: clean
	rm -f $(NAME)
	rm -f $(NAME_TESTS)
	make -C lib/my fclean
	$(MAKE) -C $(FUNC_TESTS_DIR) fclean

re: fclean all
