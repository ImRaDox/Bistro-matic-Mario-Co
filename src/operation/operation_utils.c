/*
** EPITECH PROJECT, 2025
** Bistro-matic-Mario-Co
** File description:
** operation_utils.c
*/

int get_index_in_base(char c, char *base)
{
    int i = 0;

    while (base[i] != '\0') {
        if (base[i] == c)
            return (i);
        i++;
    }
    return (-1);
}

char *my_revstr(char *str)
{
    int len = 0;
    char temp;

    while (str[len] != '\0')
        len++;
    for (int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - 1 - i];
        str[len - 1 - i] = temp;
    }
    return (str);
}