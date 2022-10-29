/*
** EPITECH PROJECT, 2022
** my_print_params
** File description:
** my_print_params
*/

void my_print_params(int ba, char **ca)
{
    int valeur = 0;

    while (valeur < ba) {
        my_putstr(ca[valeur]);
        my_putchar('\n');
        valeur++;
        }
}

int main(int ba , char **ca)
{
    my_print_params(ba,ca);
    return (0);
}
