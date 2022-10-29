/*
** EPITECH PROJECT, 2022
** my_put_nbr
** File description:
** my_put_nbr
*/

#include "my.h"
int my_put_nbr(int nb)
{
    int a;

    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    if (nb >= 10) {
        a = nb % 10;
        nb = nb / 10;
        my_put_nbr(nb);
        my_putchar(a + 48);
    } else {
        my_putchar(nb + 48);
    }
    return (0);
}