/*
** EPITECH PROJECT, 2022
** my_list_size
** File description:
** my_list_size
*/
#include <stdlib.h>
#include "Include/mylist.h"
#include "lib/my/my.h"

int my_list_size(linked_list_t const *begin)
{
    struct linked_list *tmp = begin;
    int compt = 0;

    while (tmp) {
        tmp = tmp->next;
        compt = compt + 1;
    }
    return (compt);
}
