/*
** EPITECH PROJECT, 2022
** my_strpy.c
** File description:
** my_strpy
*/

char *my_strcpy (char *dest, char const *src)
{
    int i = 0;
    while (dest[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
}
