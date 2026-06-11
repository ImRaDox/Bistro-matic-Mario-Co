/*
** EPITECH PROJECT, 2026
** Bistro-matic-Mario-Co
** File description:
** parse_term
*/

#include "bistromatic.h"

char *parse_term(char **str, char const *base, char const *ops)
{
    char *a = parse_factor(str, base, ops);
    char op;
    char *b;

    skip_spaces(str);
    while (**str == ops[OP_MULT_IDX] || **str == ops[OP_DIV_IDX]
        || **str == ops[OP_MOD_IDX]) {
        op = **str;
        (*str)++;
        b = parse_factor(str, base, ops);
        if (op == ops[OP_MULT_IDX])
            a = my_mul(a, b, base);;
        if (op == ops[OP_DIV_IDX])
            my_printf("Div implemented");
        if (op == ops[OP_MOD_IDX])
            my_printf("Not implemented");
        skip_spaces(str);
    }
    return a;
}
