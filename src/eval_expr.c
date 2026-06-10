/*
** EPITECH PROJECT, 2026
** Bistro-matic-Mario-Co
** File description:
** eval_expr
*/

#include "bistromatic.h"

char *eval_expr(char const *base, char const *ops,
    char const *expr, unsigned int size)
{
    char *str_ptr = (char *)expr;
    char *result = parse_expr(&str_ptr, base, ops);
    return (result);
}
