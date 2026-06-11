/*
** EPITECH PROJECT, 2026
** Bistro-matic-Mario-Co
** File description:
** utils_parser
*/

#include "bistromatic.h"

void skip_spaces(char **str)
{
    while (**str == ' ' || **str == '\t') {
        (*str)++;
    }
}
