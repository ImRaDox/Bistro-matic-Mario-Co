/*
** EPITECH PROJECT, 2025
** my_strdup
** File description:
** Write a function that allocates memory and copies the string given
*/

#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

static int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}

static char *my_strcpy(char *dest, char const *src)
{
    int i;

    for (i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
    }
    dest[i] = '\0';
    return dest;
}

char *my_strdup(char const *src)
{
    char *res;

    res = malloc(sizeof(char) * (my_strlen(src) + 1));
    my_strcpy(res, src);
    return res;
}
