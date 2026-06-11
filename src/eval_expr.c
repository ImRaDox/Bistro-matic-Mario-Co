/*
** EPITECH PROJECT, 2026
** Bistro-matic-Mario-Co
** File description:
** eval_expr
*/

#include "bistromatic.h"

char get_operator(char const *ops, int index)
{
    if (my_strlen(ops) == 5) {
        if (index == OP_OPEN_PARENT_IDX)
            return '(';
        if (index == OP_CLOSE_PARENT_IDX)
            return ')';
        return ops[index - 2];
    }
    return ops[index];
}

char *eval_expr(char const *base, char const *ops,
    char const *expr, unsigned int size)
{
    char *str_ptr = (char *)expr;
    char *result = parse_expr(&str_ptr, base, ops);

    (void)size;
    return (result);
}
