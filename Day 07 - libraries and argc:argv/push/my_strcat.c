/*
** EPITECH PROJECT, 2022
** my_strcat.c
** File description:
** my_strcat.c
*/

int my_strlen(char const *str)
{
    int compte;
    compte = 0;

    while (str[compte] != '\0')
        compte++;
    return (compte);
}

char *my_strcat(char *dest, char const *src)
{
    int a = 0;
    int b = my_strlen(dest);

    while (src[a] != '\0')
    	{
          dest[b] = src[a];
	  a = a + 1;
	  b = b + 1;
	}
    dest[b] = '\0';
    return (dest);
}
