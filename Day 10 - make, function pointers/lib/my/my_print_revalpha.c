/*
** EPITECH PROJECT, 2022
** my_print_revalpha
** File description:
** my_print_revalpha
*/

#include "my.h"

int my_print_revalpha(void)
{
    char alphabet;
    alphabet = 'z';
    while (alphabet >= 'a'){
        my_putchar(alphabet);
        alphabet--;
    }
    return (0);
}
