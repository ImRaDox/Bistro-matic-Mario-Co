/*
** EPITECH PROJECT, 2025
** my_putchar
** File description:
** putchar
*/

#include <unistd.h>

int my_putchar(char c)
{
    if (write(1, &c, 1) < 0)
        return -1;
    return 1;
}
