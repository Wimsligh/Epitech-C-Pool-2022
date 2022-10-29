/*
** EPITECH PROJECT, 2022
** my_print_digits
** File description:
** affiche tout les chiffres
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_print_digits(void)
{
    char chiffre;

    chiffre = 48;
    while (chiffre <= 57){
        my_putchar(chiffre);
        chiffre++;
    }
    return (0);
}

int main(){
    my_print_digits();

}
