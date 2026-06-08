/*
** EPITECH PROJECT, 2025
** my
** File description:
** my_math - math utility functions
*/

#include "my.h"

int my_abs(int n)
{
    if (n < 0)
        return -n;
    return n;
}

int my_max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int my_min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}

int my_power(int base, int exp)
{
    int result = 1;
    int i = 0;

    if (exp < 0)
        return 0;
    while (i < exp) {
        result *= base;
        i++;
    }
    return result;
}
