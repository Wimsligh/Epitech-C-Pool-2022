/*
** EPITECH PROJECT, 2022
** my_params_to_list
** File description:
** my_params
*/

#include "lib/my/my.h"
#include <stdlib.h>
#include "Include/mylist.h"
int my_put_in_list(struct linked_list **list, char * data)
{
    struct linked_list *element;

    element = malloc(sizeof(*element));
    element->data = data;
    element->next = *list;
    *list = element; 
    return (0);
}

void my_show_list(struct linked_list *list)
{
    struct linked_list *tmp;

    tmp = list;
    while (tmp != NULL)
    {
        my_putstr(tmp->data);
        my_putchar('\n');
        tmp = tmp->next;
    }
}

linked_list_t * my_params_to_list(int ac ,char * const * av)
{
    int m = 0;
    struct linked_list *list;

    list = NULL;

    while(m != ac) {
    my_put_in_list(&list,av[m]);
    m++;
    }
}

int main(int ac, char * const * av)
{
    my_params_to_list(ac,av);
}
