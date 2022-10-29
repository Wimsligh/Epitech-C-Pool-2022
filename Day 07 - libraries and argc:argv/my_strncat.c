/*
** EPITECH PROJECT, 2022
** my_strncat
** File description:
** my_strncat
*/

#include <string.h>

int my_strlen(char const *str)
{
    int compte;
    compte = 0;

    while (str[compte] != '\0')
        compte++;
    return (compte);
}

void my_putchar(char c)
{
    write(1, &c , 1);
}

int my_putstr(char const *str)
{
    while(*str != '\0')
    {
        my_putchar(*str);
        str++;
    }
}

char *my_strncat(char *dest, char const *src, int nb)
{
    int a = 0;
    int b = my_strlen(dest);

    while (a < nb)
    {
        dest[b] = src[a];
	a++;
	b++;
    }
    dest[b] = '\0';
    return (dest);
}
int main ()
{
    char dest[] = "hello";
    char src[] = "matheo";
    my_strncat(dest , src, 3);
    my_putstr(dest);
    return 0;
}

