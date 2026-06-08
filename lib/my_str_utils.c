/*
** EPITECH PROJECT, 2025
** my
** File description:
** my_str_isnum and my_str_contains
*/

#include "my.h"

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str[i] == '-' || str[i] == '+')
        i++;
    if (!str[i])
        return 0;
    while (str[i]) {
        if (str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }
    return 1;
}

int my_str_contains(char const *str, char c)
{
    int i = 0;

    while (str[i]) {
        if (str[i] == c)
            return 1;
        i++;
    }
    return 0;
}
