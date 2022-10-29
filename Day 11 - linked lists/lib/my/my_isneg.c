/*
** EPITECH PROJECT, 2022
** my_isneg
** File description:
** my_isneg
*/

#include "my.h"
int my_isneg(int n)
{
    if (n < 0) {
        my_putchar('N');
    }
    if (n >= 0) {
        my_putchar('P');
    }
}
