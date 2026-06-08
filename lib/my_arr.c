/*
** EPITECH PROJECT, 2025
** my
** File description:
** my_arrlen and my_free_arr
*/

#include "my.h"

int my_arrlen(char **arr)
{
    int i = 0;

    if (!arr)
        return 0;
    while (arr[i])
        i++;
    return i;
}

void my_free_arr(char **arr)
{
    int i = 0;

    if (!arr)
        return;
    while (arr[i]) {
        free(arr[i]);
        i++;
    }
    free(arr);
}
