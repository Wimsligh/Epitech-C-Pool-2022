/*
** EPITECH PROJECT, 2022
** my_strncat
** File description:
** my_strncat
*/

int my_strlen(char const *str)
{
    int compte;
    compte = 0;

    while (str[compte] != '\0')
        compte++;
    return (compte);
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