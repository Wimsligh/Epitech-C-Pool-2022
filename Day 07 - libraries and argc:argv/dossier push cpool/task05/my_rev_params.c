/*
** EPITECH PROJECT, 2022
** my_rev_params
** File description:
** my_rev_params
*/

void my_rev_params(int ba, char **ca)
{
    int valeur = 0;

    while (ba > 0) {
        my_putstr(ca[ba - 1]);
        my_putchar('\n');
        ba--;
        }
    return (0);
}

int main(int ba , char **ca)
{
    my_rev_params(ba,ca);
    return (0);
}
