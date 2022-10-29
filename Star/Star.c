/*
** EPITECH PROJECT, 2022
** Star
** File description:
** realisation du projet Star par Matheo Hanss
*/

#include <stdio.h>

void my_putchar(char c )
{
    write(1 , &c , 1);
}

void my_affiche1(char * dab, int nb)
{
    int i = 0;
    while (i < nb)
    {
        my_putchar(dab);
        i++;
    }
    
}
void star(unsigned int size)
{
    int i , j;
    for(i=1;i<=size;i++){ // boucle qui permet de passer d une ligne a l autre.
    for(j=1;j<=size-i;j++){
        my_putchar(' ');
        }
        for(j=1;j<=(2*i-1);j++){ // permet de tracer la forme de l etoile.
        if(j==1|| j==(2*i-1)) // etoile s affiche au cadre du triangle.
        my_putchar('*');
        else
        my_putchar(' ');
        }
        my_putchar('\n');
    }
    bar(size);
}

int bar(unsigned int x)
{
    my_putchar(' ');
    my_affiche1(*"*", (x*2) + 1);
    my_affiche1(*" ", (x*2) - 3);
    my_affiche1(*"*", (x*2) + 1);
    my_putchar(*"\n");


}
int main()
{
    star(5);
    return 0;
}