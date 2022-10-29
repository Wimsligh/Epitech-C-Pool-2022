/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** my_putstr
*/

int my_putstr(char const *str)
{
    int m;
    m = 0;
    while (str[m] != '\0'){
        my_putchar(str[m]);
        m++;
    }
    return (0);
}