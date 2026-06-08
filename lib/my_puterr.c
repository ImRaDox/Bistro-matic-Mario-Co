/*
** EPITECH PROJECT, 2025
** my
** File description:
** my_puterr
*/

#include "my.h"

int my_puterr(char const *msg)
{
    int i = 0;

    while (msg[i]) {
        write(2, &msg[i], 1);
        i++;
    }
    write(2, "\n", 1);
    return 84;
}
