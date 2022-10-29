/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** my_putstr
*/

int my_putstr(char const *str)
{
    while (*str != '\0'){
        my_putchar(*str);
        str++;
    }
}
