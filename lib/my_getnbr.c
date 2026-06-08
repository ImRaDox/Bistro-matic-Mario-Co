/*
** EPITECH PROJECT, 2025
** G-CPE-110-LIL-1-1-settingup-55
** File description:
** my_getnbr.c
*/

#include "my.h"

int my_getnbr(char const *str)
{
    int i = 0;
    int sign = 1;
    long result = 0;

    while (str[i] == '+' || str[i] == '-') {
        if (str[i] == '-')
            sign *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - '0');
        if (result * sign > 2147483647)
            return (0);
        if (result * sign < -2147483648)
            return (0);
        i++;
    }
    return ((int)(result * sign));
}
