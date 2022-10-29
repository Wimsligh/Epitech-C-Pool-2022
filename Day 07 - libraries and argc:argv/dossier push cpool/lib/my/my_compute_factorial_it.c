/*
** EPITECH PROJECT, 2022
** my_compute_factorial_it
** File description:
** my_compute_factorial_it
*/

#include <stdio.h>

int my_compute_factorial_it(int nb)
{
    int valeur = 1;

    if (nb < 0 || nb > 12) {
        valeur = 0;
    }else {
        while (nb > 0) {
            valeur = valeur * nb;
            nb --;
        }
    }
    return (valeur);
}
