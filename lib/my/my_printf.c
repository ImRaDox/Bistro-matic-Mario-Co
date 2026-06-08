/*
** EPITECH PROJECT, 2025
** mini_printf
** File description:
** rrrr
*/

#include <stdarg.h>
#include <unistd.h>
#include "my.h"

int condition_format(char format, va_list *args)
{
    int res = 0;

    if (format == 'c')
        res = my_putchar(va_arg(*args, int));
    if (format == 's')
        res = my_putstr(va_arg(*args, char *));
    if (format == 'd' || format == 'i')
        res = my_put_nbr(va_arg(*args, int));
    if (format == '%')
        res = my_putchar('%');
    return res;
}

int my_printf(const char *format, ...)
{
    va_list liste;
    int count = 0;
    int res = 0;

    va_start(liste, format);
    for (int i = 0; format[i] != 0; i++) {
        if (format[i] == '%' && format[i + 1] != '\0') {
            i++;
            res = condition_format(format[i], &liste);
            count += res;
        } else {
            res = my_putchar(format[i]);
            count += res;
        }
    }
    va_end(liste);
    return count;
}
