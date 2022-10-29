/*
** EPITECH PROJECT, 2022
** my_compute_factorial_rec
** File description:
** my_compute_factorial_rec
*/

int my_compute_factorial_rec(int nb)
{
    int valeur = 1;

    if (nb < 0 || nb > 12) {
        return (0);
    }if (nb > 0 ) {
        valeur = nb* my_compute_factorial_rec(nb - 1);
    }
    return valeur;
}
