/*
** EPITECH PROJECT, 2026
** Bistro-matic-Mario-Co
** File description:
** main
*/

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "bistromatic.h"

static char *get_expr(unsigned int size)
{
    char *expr;

    if (size <= 0) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_SIZE_NEG);
    }
    expr = malloc(size + 1);
    if (expr == 0) {
        my_putstr(ERROR_MSG);
        exit(EXIT_MALLOC);
    }
    if (read(0, expr, size) != size) {
        my_putstr(ERROR_MSG);
        exit(EXIT_READ);
    }
    expr[size] = 0;
    return (expr);
}

int check_flag_h(int argc, char **argv)
{
    if (argc == 2 && strcmp(argv[1], "-h") == 0) {
        my_printf("USAGE\n./calc base operators size_read\n\n");
        my_printf("DESCRIPTIONS\n- base: all the symbols of the base\n");
        my_printf("- operators: the symbols for the parentheses and the");
        my_printf("5 operators\n");
        my_printf("- size_read: number of characters to be read");
        return 1;
    }
    return 0;
}

static void check_ops(char const *ops)
{
    if (my_strlen(ops) != 7) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_OPS);
    }
}

static void check_base(char const *b)
{
    if (my_strlen(b) < 2) {
        my_putstr(SYNTAX_ERROR_MSG);
        exit(EXIT_BASE);
    }
}

int main(int ac, char **av)
{
    unsigned int size;
    char *expr;

    if (check_flag_h(ac, av) == 1)
        return 0;
    if (ac != 4) {
        my_putstr("Usage: ");
        my_putstr(av[0]);
        my_putstr(" base ops\"()+_*/%\" exp_len\n");
        return (EXIT_USAGE);
    }
    check_base(av[1]);
    check_ops(av[2]);
    size = my_atoi(av[3]);
    expr = get_expr(size);
    my_putstr(eval_expr(av[1], av[2], expr, size));
    return (EXIT_SUCCESS);
}
