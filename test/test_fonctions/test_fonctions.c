/*
** EPITECH PROJECT, 2026
** Bistro-matic-Mario-Co
** File description:
** test_add
*/

#include "bistromatic.h"

int main(int argc, char **argv)
{
    char *nb1 = "1";
    char *nb2 = "1";
    char *base = "0123456789";
    char *result = NULL;

    if (argc > 1 || argv[1] != NULL) {
        my_printf("%s", ERROR_MSG);
        return EXIT_BASE;
    }
    result = my_add(nb1, nb2, base);
    my_printf("The result of the addition is: %s\n", result);
    result = my_sub(nb1, nb2, base);
    my_printf("The result of the substraction is: %s\n", result);
    // result = my_div(nb1, nb2, base);
    // my_printf("The result of the division is: %s\n", result);
    // result = my_mod(nb1, nb2, base);
    // my_printf("The result of the modulo is: %s\n", result);
    // result = my_mul(nb1, nb2, base);
    // my_printf("The result of the multiplication is: %s\n", result);
}
