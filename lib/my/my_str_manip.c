/*
** EPITECH PROJECT, 2025
** my
** File description:
** my_str_manip - string manipulation functions
*/

#include "my.h"

char *my_strtrim(char const *str)
{
    int start = 0;
    int end = my_strlen(str) - 1;

    while (str[start] == ' ' || str[start] == '\t')
        start++;
    while (end > start && (str[end] == ' ' || str[end] == '\t'))
        end--;
    return my_strndup(&str[start], end - start + 1);
}

char *my_str_tolower(char const *str)
{
    int len = my_strlen(str);
    char *res = malloc(len + 1);
    int i = 0;

    if (!res)
        return NULL;
    while (str[i]) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            res[i] = str[i] + 32;
        else
            res[i] = str[i];
        i++;
    }
    res[i] = '\0';
    return res;
}

char *my_str_toupper(char const *str)
{
    int len = my_strlen(str);
    char *res = malloc(len + 1);
    int i = 0;

    if (!res)
        return NULL;
    while (str[i]) {
        if (str[i] >= 'a' && str[i] <= 'z')
            res[i] = str[i] - 32;
        else
            res[i] = str[i];
        i++;
    }
    res[i] = '\0';
    return res;
}

void my_str_replace(char *str, char old, char new)
{
    int i = 0;

    while (str[i]) {
        if (str[i] == old)
            str[i] = new;
        i++;
    }
}
