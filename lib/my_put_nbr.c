/*
** EPITECH PROJECT, 2025
** ggg
** File description:
** fff
*/

#include <unistd.h>

int my_put_nbr(int n)
{
    int count = 0;
    char c;
    long nb = n;

    if (nb < 0) {
        write(1, "-", 1);
        count++;
        nb = -nb;
    }
    if (nb >= 10) {
        count += my_put_nbr(nb / 10);
        nb %= 10;
    }
    c = '0' + nb;
    write(1, &c, 1);
    count++;
    return count;
}
