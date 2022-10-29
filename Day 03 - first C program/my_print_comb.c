/*
** EPITECH PROJECT, 2022
** my_print_comb
** File description:
*/

#include <unistd.h>

void my_putchar(char c){
    write(1, &c, 1);
} 

int my_print_condition(int nombre1, int nombre2, int nombre3)
{
    nombre1 = 0;
    nombre2 = 1;
    nombre3 = 2;

    while (nombre1 <= '7')
        nombre1 = nombre2 + 1;
    {
        while (nombre2 <= '8')
            nombre2 = nombre3 +1;
        {
            while (nombre3 <= '9')
            {
                if (nombre1 == 7 && nombre2 == 8 && nombre3 == 9)
            {
                my_putchar(nombre1);
                my_putchar(nombre2);
                my_putchar(nombre3);
                my_putchar(';');
                my_putchar(' ');
            }
        }
    }
                
}
int my_print_comb(void)
{
    for (int nombre1 = 0; nombre1 < 8; nombre1++) {
        if (nombre1 < nombre2 && nombre2 < nombre3 && nombre1 < nombre3) {
            my_putchar(48 + nombre1);
            my_putchar(48 + nombre2);
            my_putchar(48 + nombre3);
        }
    }
}
int main(){
    my_print_comb();
    return 0;
}
