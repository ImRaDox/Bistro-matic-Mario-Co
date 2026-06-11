/*
** EPITECH PROJECT, 2025
** Bistro-matic-Mario-Co
** File description:
** mul.c
*/

#include "my.h"
#include "bistromatic.h"

static char *mul_by_digit(char *nb, int digit, char const *base)
{
    int len = my_strlen(nb);
    int b_len = my_strlen(base);
    int carry = 0;
    int i = 0;
    char *res = malloc(sizeof(char) * (len + 2));
    int product = 0;

    for (; i < len; i++) {
        product = get_digit_val(nb, len, i, base) * digit + carry;
        res[i] = base[product % b_len];
        carry = product / b_len;
    }
    if (carry > 0) {
        res[i] = base[carry];
        i++;
    }
    res[i] = '\0';
    return (my_revstr(res));
}

static char *shift_left(char *nb, int shift, char const *base)
{
    int len = my_strlen(nb);
    int i = 0;
    char *res = malloc(sizeof(char) * (len + shift + 1));

    for (; i < len; i++)
        res[i] = nb[i];
    for (; i < len + shift; i++)
        res[i] = base[0];
    res[i] = '\0';
    return (res);
}

char *my_mul(char *nb1, char *nb2, char const *base)
{
    int len2 = my_strlen(nb2);
    int j = 0;
    char *line = NULL;
    char *tmp = NULL;
    char *result = malloc(sizeof(char) * 2);

    result[0] = base[0];
    result[1] = '\0';
    for (; j < len2; j++) {
        line = mul_by_digit(nb1, get_digit_val(nb2, len2, j, base), base);
        tmp = shift_left(line, j, base);
        free(line);
        line = my_add(result, tmp, base);
        free(result);
        free(tmp);
        result = line;
    }
    return (result);
}
