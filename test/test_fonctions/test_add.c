/*
** EPITECH PROJECT, 2026
** Bistro-matic-Mario-Co
** File description:
** test_add
*/

#include "bistromatic.h"

int main(int argc, char **argv)
{
    char *nb1 = "10";
    char *nb2 = "50";
    char *base = "0123456789";
    char *result = NULL;

    result = my_add(nb1, nb2, base);
    printf("The result of the add is: %s", result);
}
