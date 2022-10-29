/*
** EPITECH PROJECT, 2022
** my_print_revalpha.c
** File description:
** affiche l'alphabet minuscule dans l'ordre décroissant
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_revalpha(void) {
    char alphabet;

    alphabet = 'z';
    while(alphabet >= 'a')
    {
    my_putchar(alphabet);
    alphabet--;
    };
    return 0;
}
int main() {
    my_print_revalpha();
}
