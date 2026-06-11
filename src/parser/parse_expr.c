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

    skip_spaces(str);
    while (**str == get_operator(ops, OP_PLUS_IDX)
        || **str == get_operator(ops, OP_SUB_IDX)) {
        op = **str;
        (*str)++;
        b = parse_term(str, base, ops);
        if (op == get_operator(ops, OP_PLUS_IDX))
            a = my_add(a, b, base);
        else
            a = my_sub(a, b, base);
        skip_spaces(str);
    }
    return a;
}
