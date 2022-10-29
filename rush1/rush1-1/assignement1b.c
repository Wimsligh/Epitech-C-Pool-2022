/*
** EPITECH PROJECT, 2022
** assignement1b
** File description:
** b
*/

int lineb(int l, int i)
{
    if ( i == 1 || i == l ) {
        my_putchar('o');
    } else {
        my_putchar('-');
    }
}

int columnb(int m, int j)
{
    if ( j == 1 || j == m ) {
        my_putchar('|');
    } else {
        my_putchar(' ');
    }
}
