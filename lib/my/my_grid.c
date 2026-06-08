/*
** EPITECH PROJECT, 2025
** my
** File description:
** my_grid - create, free and print a 2D grid
*/

#include "my.h"

char **my_create_grid(int rows, int cols, char fill)
{
    char **grid = malloc(sizeof(char *) * rows);
    int i = 0;
    int j = 0;

    if (!grid)
        return NULL;
    while (i < rows) {
        grid[i] = malloc(cols + 1);
        if (!grid[i])
            return NULL;
        j = 0;
        while (j < cols) {
            grid[i][j] = fill;
            j++;
        }
        grid[i][cols] = '\0';
        i++;
    }
    return grid;
}

void my_free_grid(char **grid, int rows)
{
    int i = 0;

    if (!grid)
        return;
    while (i < rows) {
        free(grid[i]);
        i++;
    }
    free(grid);
}

void my_print_grid(char **grid, int rows)
{
    int i = 0;

    while (i < rows) {
        my_putstr(grid[i]);
        my_putchar('\n');
        i++;
    }
}
