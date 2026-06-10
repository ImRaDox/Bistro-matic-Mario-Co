/*
** EPITECH PROJECT, 2026
** Bistro-matic-Mario-Co
** File description:
** add.c
*/

#include "my.h"

char *my_add(char *nb1, char *nb2, char *base)
{
    int len1 = my_strlen(nb1);
    int len2 = my_strlen(nb2);
    int b_len = my_strlen(base);
    int carry = 0;
    int i = 0;
    int sum = 0;
    char *result = NULL;

    result = malloc(sizeof(char) * (len1 + len2 + 2));
    if (!result)
        return NULL;
    for (; i < len1 || i < len2 || carry; i++) {
        sum = carry;
        sum += get_digit_val(nb1, len1, i, base);
        sum += get_digit_val(nb2, len2, i, base);
        result[i] = base[sum % b_len];
        carry = sum / b_len;
    }
    result[i] = '\0';
    return (my_revstr(result));
}
