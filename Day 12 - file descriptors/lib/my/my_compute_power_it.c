/*
** EPITECH PROJECT, 2022
** my_compute_power_it
** File description:
** my_compute_power_it
*/

int my_compute_power_it(int nb, int p)
{
    int valeur = nb;

    if (p < 0) {
        valeur = 0;
    } else if (p == 0){
        valeur = 1;
    }
    while (p > 1) {
            valeur = valeur * nb;
            p--;
        }
    return (valeur);
}
