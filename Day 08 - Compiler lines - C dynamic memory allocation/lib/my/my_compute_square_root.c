/*
** EPITECH PROJECT, 2022
** my_compute_square_root
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    int epi = 0;
    int tech = 0;

    while (epi <= nb){
        tech = epi * epi;
        if (tech == nb)
            return (epi);
        epi = epi + 1;
    }
    return (0);
}
