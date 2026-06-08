/*
** EPITECH PROJECT, 2025
** my
** File description:
** my_strjoin
*/

#include "my.h"

char *my_strjoin(char const *s1, char const *s2)
{
    int len = my_strlen(s1) + my_strlen(s2);
    char *result = malloc(len + 1);

    if (!result)
        return NULL;
    my_strcpy(result, s1);
    my_strcat(result, s2);
    return result;
}
