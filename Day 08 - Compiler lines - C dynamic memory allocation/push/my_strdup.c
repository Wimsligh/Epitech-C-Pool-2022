/*
** EPITECH PROJECT, 2022
** my_strdup.c
** File description:
** my_strdup
*/

char *my_strdup(char const *src)
{
    int a = 0;
    char *dest = malloc(my_strlen(src));

    while (src[a] != '\0') {
    dest[a] = src[a];
        a = a + 1;
    }
    dest[a] = '\0';
    return (dest);
}