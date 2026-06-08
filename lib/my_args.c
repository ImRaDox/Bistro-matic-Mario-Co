/*
** EPITECH PROJECT, 2025
** my
** File description:
** my_args - parse command line flags
*/

#include "my.h"

char *my_get_flag(int argc, char **argv, char const *flag)
{
    int i = 1;

    while (i < argc - 1) {
        if (my_strcmp(argv[i], flag) == 0)
            return argv[i + 1];
        i++;
    }
    return NULL;
}

int my_flag_exists(int argc, char **argv, char const *flag)
{
    int i = 1;

    while (i < argc) {
        if (my_strcmp(argv[i], flag) == 0)
            return 1;
        i++;
    }
    return 0;
}
