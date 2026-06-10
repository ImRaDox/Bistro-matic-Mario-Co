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

    while (**str == ops[OP_MULT_IDX] || **str == ops[OP_DIV_IDX]
        || **str == ops[OP_MOD_IDX]) {
        op = **str;
        (*str)++;
        b = parse_factor(str, base, ops);
        if (op == ops[OP_MULT_IDX])
        /*Multiplication*/
            a = a;
        if (op == ops[OP_DIV_IDX])
        /*Division*/
            a = a;
        if (op == ops[OP_MOD_IDX])
        /*Modulo*/
            a = a;
    }
    return a;
}
