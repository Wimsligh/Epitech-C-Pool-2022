/*
** EPITECH PROJECT, 2022
** my_isneg
** File description:
** affiche soit N si l'entier passé en paramètre est négatif, soit P, s'il est positif ou nul.
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_isneg(int n) {

    if(n < 0)
    {
    my_putchar('N'); 
    }
    if(n >= 0)
    {
    my_putchar('P');    
    }
};
int main(void) {

    my_isneg(0);
}
