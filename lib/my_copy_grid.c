/*
** EPITECH PROJECT, 2025
** my
** File description:
** my_copy_grid - copy a 2D grid
*/

#include "my.h"

char **my_copy_grid(char **grid, int rows, int cols)
{
    char **copy = malloc(sizeof(char *) * rows);
    int i = 0;

    if (!copy)
        return NULL;
    while (i < rows) {
        copy[i] = my_strndup(grid[i], cols);
        if (!copy[i])
            return NULL;
        i++;
    }
    return copy;
}
