/*
** EPITECH PROJECT, 2022
** my_strlen
** File description:
** my_strlen
*/

#include "my.h"
int my_strlen(char const *str)
{
    int compte;
    compte = 0;

    while (str[compte] != '\0')
        compte++;
    return (compte);
}
