/*
** EPITECH PROJECT, 2026
** Bistro-matic-Mario-Co
** File description:
** parse_number
*/

#include "bistromatic.h"

int my_strchr(char const *str, int c)
{
    while (*str) {
        if (*str == c)
            return EXIT_CONDITION;
        str++;
    }
    return EXIT_SUCCESS;
}

char *parse_number(char **str, char const *base)
{
    int len = 0;
    int i = 0;
    char *num;
    char *temp = *str;

    while (*temp && my_strchr(base, *temp)) {
        len++;
        temp++;
    }
    num = malloc(sizeof(char) * (len + 1));
    if (num == NULL)
        return NULL;
    while (**str && my_strchr(base, **str)) {
        num[i] = **str;
        i++;
        (*str)++;
    }
    num[i] = '\0';
    return num;
}
