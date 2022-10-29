/*
** EPITECH PROJECT, 2022
** my_strpy.c
** File description:
** my_strpy
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1 , &c , 1);
}

int my_putstr(char const *str)
{
    while (*str != '\0')
    {
        my_putchar(*str);
        str++;
    }
}

char *my_strcpy (char *dest, char const *src)
{
    int i = 0;
    while (dest[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
}

int main(void)
{
    char dest[] = "Epitech";
    char src[] = "Matheo";
    my_strcpy(dest, src);
    my_putstr(dest);
}
