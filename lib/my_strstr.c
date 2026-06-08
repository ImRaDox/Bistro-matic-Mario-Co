/*
** EPITECH PROJECT, 2025
** my
** File description:
** my_strstr
*/

#include "my.h"

char *my_strstr(char const *hay, char const *needle)
{
    int nlen = my_strlen(needle);
    int i = 0;

    if (nlen == 0)
        return (char *)hay;
    while (hay[i]) {
        if (my_strncmp(&hay[i], needle, nlen) == 0)
            return (char *)&hay[i];
        i++;
    }
    return NULL;
}
