/*
** EPITECH PROJECT, 2022
** do_op
** File description:
** do-op
*/

#include "../lib/my/my.h"

int recherche(char *a, char *b, char *c)
{
    int i = my_getnbr(a);
    int o = my_getnbr(b);
    if (!(a[0] > '0' && a[0] < '9')) {
        return (o);
    }
    if (!(a[0] > '0' && a[0] < '9')) {
        return (i);
    }
    calcul(i , b, o);
}

int calcul(int i, char *b, int o)
{
    if (b[0] == '+') {
        return (i+o);
    }
    if (b[0] == '-') {
        return (i-o);
    }
    if (b[0] == '*') {
        return (i*o);
    }
    if (b[0] == '/') {
        return (i/o);
    }
    if (b[0] == '%') {
        return (i%o);
    }
    else {
        return (0);
}
}

int main(int argc, char **argv)
{
    int m = recherche(argv[1], argv[2], argv[3]);
    printf("%d", m);
    return (0);
}
