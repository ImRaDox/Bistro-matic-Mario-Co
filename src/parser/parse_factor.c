/*
** EPITECH PROJECT, 2026
** Bistro-matic-Mario-Co
** File description:
** parse_factor
*/

#include "bistromatic.h"

char *parse_factor(char **str, char const *base, char const *ops)
{
    char *a;

    if (**str == get_operator(ops, OP_OPEN_PARENT_IDX)) {
        (*str)++;
        a = parse_expr(str, base, ops);
        if (**str == get_operator(ops, OP_CLOSE_PARENT_IDX))
            (*str)++;
        return a;
    } else {
        a = parse_number(str, base);
        return a;
    }
}
