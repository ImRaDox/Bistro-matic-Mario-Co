/*
** EPITECH PROJECT, 2026
** Bistro-matic-Mario-Co
** File description:
** test_features
*/

#include "criterion/criterion.h"

char *eval_expr(char const *base, char const *ops,
    char const *expr, unsigned int size);

Test(eval_expr, basic_addition)
{
    cr_assert_str_eq(eval_expr("0123456789", "+-*/%", "1+1", 3), "2");
}

Test(eval_expr, basic_multiplication)
{
    cr_assert_str_eq(eval_expr("0123456789", "+-*/%", "4*3", 3), "12");
}

Test(eval_expr, basic_subtraction)
{
    cr_assert_str_eq(eval_expr("0123456789", "+-*/%", "5-3", 3), "2");
}

Test(eval_expr, operator_priority)
{
    cr_assert_str_eq(eval_expr("0123456789", "+-*/%", "2+3*4", 5), "14");
}

Test(eval_expr, expression_with_parentheses)
{
    cr_assert_str_eq(eval_expr("0123456789", "+-*/%", "(2+3)*4", 7), "20");
}
