/*
** EPITECH PROJECT, 2026
** Bistro-matic-Mario-Co
** File description:
** sub.c
*/

#include "my.h"

static int subtract_digit(int d1, int d2, int b_len, int *borrow)
{
    int diff = d1 - d2 - *borrow;

    *borrow = 0;
    if (diff < 0) {
        diff += b_len;
        *borrow = 1;
    }
    return diff;
}

char *my_sub(char *nb1, char *nb2, char const *base)
{
    int len1 = my_strlen(nb1);
    int len2 = my_strlen(nb2);
    int b_len = my_strlen(base);
    int borrow = 0;
    int i = 0;
    int d1 = 0;
    int d2 = 0;
    char *result = malloc(sizeof(char) * (len1 + 1));

    if (!result)
        return NULL;
    for (; i < len1; i++) {
        d1 = get_digit_val(nb1, len1, i, base);
        d2 = get_digit_val(nb2, len2, i, base);
        result[i] = base[subtract_digit(d1, d2, b_len, &borrow)];
    }
    while (i > 1 && result[i - 1] == base[0])
        i--;
    result[i] = '\0';
    return (my_revstr(result));
}
