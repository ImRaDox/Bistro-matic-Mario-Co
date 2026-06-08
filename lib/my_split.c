/*
** EPITECH PROJECT, 2025
** my
** File description:
** my_split
*/

#include "my.h"

static int count_tokens(char const *str, char delim)
{
    int count = 1;
    int i = 0;

    while (str[i]) {
        if (str[i] == delim)
            count++;
        i++;
    }
    return count;
}

char **my_split(char const *str, char delim)
{
    int count = count_tokens(str, delim);
    char **arr = malloc(sizeof(char *) * (count + 1));
    int start = 0;
    int idx = 0;

    if (!arr)
        return NULL;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == delim) {
            arr[idx] = my_strndup(&str[start], i - start);
            idx++;
            start = i + 1;
        }
    }
    arr[idx] = my_strdup(&str[start]);
    arr[idx + 1] = NULL;
    return arr;
}
