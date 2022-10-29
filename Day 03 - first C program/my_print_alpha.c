/*
** EPITECH PROJECT, 2022
** my_print_alpha
** File description:
** affiche l'alphabet minuscule dans l'ordre croissant
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}    

int my_print_alpha(void) {
    char alphabet;

    alphabet = 'a';
    while(alphabet <= 'z')
   {
   my_putchar(alphabet);
   alphabet++;
   };
   return 0;
}

int main() {
    my_print_alpha();

}
