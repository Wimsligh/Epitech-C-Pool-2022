/*
** EPITECH PROJECT, 2022
** fonctions
** File description:
** b
*/

#include <stdio.h>

int my_putchar(char c)
{
    write(1, &c, 1);
}

int linebtop(int l, int i)
{
    for ( i = 1 ; i <= l ; i++ ) {
        if ( l >= 3 && i < 2) {
            my_putchar('/');
        }
        if (i >= 4 && l <= 4) {
            my_putchar('*');
        }
        if ( l >= 4 && i >= 3 && i >= 2) {
            my_putchar('*'); 
        }
        if ( l >= 3 && i > 3 && i <= 4) {
            my_putchar('\\');
        }
    }
}

int linebdown(int l, int i)
{
    for ( i = 1 ; i <= l ; i++ ) {
        if ( l >= 4  && i < 2) {
            my_putchar('\\');
        }
        if ( l >= 3 && i > 2) {
            my_putchar('*');
        } 
        if ( l >= 1 && i >= 4 && i >= 4 && l != 3) {
            my_putchar('/');
        }
    }
}
int columnb(int m, int j)
{
    if ( j == 1 || j == m ) {
        my_putchar('*');
    } else {
        my_putchar(' ');
    }
}