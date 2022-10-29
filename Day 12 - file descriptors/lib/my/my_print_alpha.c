/*
** EPITECH PROJECT, 2022
** my_print_alpha
** File description:
** my_print_alpha
*/

#include "my.h"
int my_print_alpha(void)
{
    char alphabet;
    alphabet = 'a';
    while (alphabet <= 'z') {
        my_putchar(alphabet);
        alphabet++;
    }
    return (0);
}
