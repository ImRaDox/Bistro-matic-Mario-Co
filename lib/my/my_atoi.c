/*
** EPITECH PROJECT, 2026
** Bistro-matic-Mario-Co
** File description:
** my_atoi
*/

#include "my.h"

static int skip_spaces(char const *str)
{
    int i = 0;

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
        str[i] == '\r' || str[i] == '\v' || str[i] == '\f')
        i++;
    return i;
}

int my_atoi(char const *str)
{
    int i = skip_spaces(str);
    int sign = 1;
    long result = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + str[i] - '0';
        if (result * sign > 2147483647)
            return 0;
        if (result * sign < -2147483648)
            return 0;
        i++;
    }
    return (int)(result * sign);
}
