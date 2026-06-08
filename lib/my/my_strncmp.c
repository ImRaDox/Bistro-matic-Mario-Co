/*
** EPITECH PROJECT, 2025
** G-PSU-200-LIL-2-1-minishell1-20
** File description:
** my_strncmp.c
*/

#include <stdlib.h>
#include <string.h>

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (i < n && s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    if (i == n)
        return (0);
    return (s1[i] - s2[i]);
}
