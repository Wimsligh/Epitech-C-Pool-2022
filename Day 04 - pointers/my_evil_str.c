/*
** EPITECH PROJECT, 2022
** my_evil_str
** File description:
** my_evil_str
*/
#include <stdio.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

char *my_evil_str(char *str)
{
    int len;
    int nombre;
    
    len = my_strlen(str);
    nombre = 0;
    while (nombre < len / 2)
    {
            char temp = str[nombre];
            str[nombre] = str[len - nombre - 1];
            str[len - nombre - 1] = temp; 
        nombre++;
        }
    return (str);
}
int main()
{
    char *string = strdup("abcd");
    my_putstr(my_evil_str(string));
}



