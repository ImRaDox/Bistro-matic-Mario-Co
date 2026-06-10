/*
** EPITECH PROJECT, 2026
** Bistro-matic-Mario-Co
** File description:
** parse_expr
*/

#include "bistromatic.h"

char *parse_expr(char **str, char const *base, char const *ops)
{
    char *a = parse_term(str, base, ops);
    char op;
    char *b;

    while (**str == ops[OP_PLUS_IDX] || **str == ops[OP_SUB_IDX]) {
        op = **str;
        (*str)++;
        b = parse_term(str, base, ops);
        if (op == ops[OP_PLUS_IDX])
            a = my_add(a, b, base);
        else
            a = my_sub(a, b, base);
    }
    return a;
}
