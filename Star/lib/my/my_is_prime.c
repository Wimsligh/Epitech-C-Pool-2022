/*
** EPITECH PROJECT, 2022
** my_is_prime
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    int a;
    int valeur = 0;
    for (a = 1;a <= nb;a++) {
        if (nb % a == 0)
        valeur++;
        }
        if (valeur == 2)
        return (1);
        else
        return (0);
}
