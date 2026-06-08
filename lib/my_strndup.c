/*
** EPITECH PROJECT, 2025
** my
** File description:
** my_strndup
*/

#include "my.h"

char *my_strndup(char const *src, int n)
{
    char *dest = malloc(n + 1);
    int i = 0;

    if (!dest)
        return NULL;
    while (i < n) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
