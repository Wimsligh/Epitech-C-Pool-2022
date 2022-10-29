/*
** EPITECH PROJECT, 2022
** assignement 2
** File description:
** carre
*/

#include <stdio.h>


void column(int m)
{
    int j;

    for (j = 1 ; j <= m ; j++)
    {
        columnb( m , j );
    }
    my_putchar('\n');
}

int rushb( int x, int y )
{
    int a = 1;
    while ( a < ( y - 1 ) ) {
        column(x);
        a++;
        if( (a + 1) == y ) {
        linebdown(x);
        }
    }
}

void rush( int x , int y )
{
    int a = 1;

    linebtop(x);
    putchar('\n');
    if ( x < 1 ) {
        return;
    } else {
        rushb(x,y);
    }
}

int main (void)
{
    rush(1 , 1);
    my_putchar('\n');
    rush(4 , 4);
    return (0) ;
}