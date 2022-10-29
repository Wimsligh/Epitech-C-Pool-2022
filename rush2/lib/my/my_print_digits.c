/*
** EPITECH PROJECT, 2022
** my_print_digits
** File description:
** affiche tout les chiffres
*/

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
