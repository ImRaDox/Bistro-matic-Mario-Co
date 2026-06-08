/*
** EPITECH PROJECT, 2025
** my
** File description:
** my_char - character check functions
*/

#include "my.h"

int my_isalpha(char c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int my_isdigit(char c)
{
    return c >= '0' && c <= '9';
}

int my_isspace(char c)
{
    return c == ' ' || c == '\t' || c == '\n'
        || c == '\r' || c == '\f' || c == '\v';
}

int my_isalnum(char c)
{
    return my_isalpha(c) || my_isdigit(c);
}
