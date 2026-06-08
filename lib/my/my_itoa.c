/*
** EPITECH PROJECT, 2025
** my
** File description:
** my_itoa
*/

#include "my.h"

static int count_digits(int n)
{
    int count = 1;

    if (n < 0)
        count++;
    while (n / 10 != 0) {
        n /= 10;
        count++;
    }
    return count;
}

char *my_itoa(int n)
{
    int digits = count_digits(n);
    char *str = malloc(digits + 1);
    int neg = (n < 0);
    unsigned int nb = neg ? (unsigned int)(-n) : (unsigned int)n;
    int i = digits - 1;

    if (!str)
        return NULL;
    str[digits] = '\0';
    if (nb == 0) {
        str[0] = '0';
        return str;
    }
    while (nb > 0) {
        str[i] = '0' + (nb % 10);
        nb /= 10;
        i--;
    }
    if (neg)
        str[0] = '-';
    return str;
}
