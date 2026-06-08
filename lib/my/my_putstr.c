/*
** EPITECH PROJECT, 2025
** my_putstr
** File description:
** Write a function that displays, one-by-one, the characters of a string
*/

#include <unistd.h>
#include "my.h"

int my_putstr(const char *str)
{
    int count = 0;
    int res;

    for (int i = 0; str[i] != '\0'; i++) {
        res = write(1, &str[i], 1);
        count += res;
    }
    return count;
}
