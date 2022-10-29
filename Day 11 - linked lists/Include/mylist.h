/*
** EPITECH PROJECT, 2022
** mylist
** File description:
** myList
*/

#ifndef MYLIST_H_
    #define MYLIST_H_
typedef struct linked_list
{
    void * data;
    struct linked_list * next;
}linked_list_t ;

linked_list_t *my_params_to_list(int ac,char * const * av);
#endif
