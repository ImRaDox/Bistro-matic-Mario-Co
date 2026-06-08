/*
** EPITECH PROJECT, 2025
** G-PSU-200-LIL-2-1-minishell1-20
** File description:
** my_strlen.c
*/

#include <stdlib.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
