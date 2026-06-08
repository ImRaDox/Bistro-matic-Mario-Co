/*
** EPITECH PROJECT, 2025
** my
** File description:
** my_sort - sort an array of strings
*/

#include "my.h"

static void swap(char **arr, int i, int j)
{
    char *tmp = arr[i];

    arr[i] = arr[j];
    arr[j] = tmp;
}

static void sort_pass(char **arr, int len, int i,
    int (*cmp)(char const *, char const *))
{
    int j = i + 1;

    while (j < len) {
        if (cmp(arr[i], arr[j]) > 0)
            swap(arr, i, j);
        j++;
    }
}

void my_sort_arr(char **arr, int (*cmp)(char const *, char const *))
{
    int len = my_arrlen(arr);
    int i = 0;

    while (i < len - 1) {
        sort_pass(arr, len, i, cmp);
        i++;
    }
}
