/*
** EPITECH PROJECT, 2025
** G-PSU-200-LIL-2-1-minishell1-20
** File description:
** my_strcat.c
*/

#include <stdlib.h>
#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int len_dest = my_strlen(dest);

    while (src[i] != '\0') {
        dest[len_dest + i] = src[i];
        i++;
    }
    dest[len_dest + i] = '\0';
    return dest;
}
