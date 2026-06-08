/*
** EPITECH PROJECT, 2025
** my
** File description:
** my_lst - linked list functions
*/

#include "my.h"

my_lst_t *my_lstnew(void *data)
{
    my_lst_t *node = malloc(sizeof(my_lst_t));

    if (!node)
        return NULL;
    node->data = data;
    node->next = NULL;
    return node;
}

void my_lstadd(my_lst_t **lst, void *data)
{
    my_lst_t *node = my_lstnew(data);

    if (!node)
        return;
    node->next = *lst;
    *lst = node;
}

void my_lstadd_back(my_lst_t **lst, void *data)
{
    my_lst_t *node = my_lstnew(data);
    my_lst_t *cur = *lst;

    if (!node)
        return;
    if (!*lst) {
        *lst = node;
        return;
    }
    while (cur->next)
        cur = cur->next;
    cur->next = node;
}

int my_lstsize(my_lst_t *lst)
{
    int count = 0;

    while (lst) {
        count++;
        lst = lst->next;
    }
    return count;
}

void my_lstfree(my_lst_t *lst)
{
    my_lst_t *tmp;

    while (lst) {
        tmp = lst->next;
        free(lst->data);
        free(lst);
        lst = tmp;
    }
}
