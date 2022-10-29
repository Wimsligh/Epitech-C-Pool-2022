/*
** EPITECH PROJECT, 2022
** my_strncpy
** File description:
** my_strncpy
*/

char *my_strncpy (char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n){
        dest[i] = src[i];
        i++;
        }
        dest[i] = '\0';
        return (dest);
}
