/*
** EPITECH PROJECT, 2025
** my
** File description:
** my_strcasecmp
*/

#include "my.h"

static char to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 32;
    return c;
}

int my_strcasecmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] && s2[i]) {
        if (to_lower(s1[i]) != to_lower(s2[i]))
            return to_lower(s1[i]) - to_lower(s2[i]);
        i++;
    }
    return to_lower(s1[i]) - to_lower(s2[i]);
}
